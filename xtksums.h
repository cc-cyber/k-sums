#ifndef KSUMINDP_H
#define KSUMINDP_H

/**
implementation of k-sums, Im and Is

**/

#include "abstractkmeans.h"

#include <vector>
#include <set>
#include <map>

#include "nnitem.h"

using namespace std;

class XTKSums: public AbstractKMeans
{
    public:
        XTKSums();
        virtual ~XTKSums();

        double *distortions, *tcs;        ///keeps the average distortions and time cost in each iteration
        double *minDsts, *Ds;
        int *bstLabels;

        double *l2norms;
        static const int nIter, nTrails;
        clock_t bg, ed;
        int verbose;

    public:
        bool   init(const char *srcfn);
        bool   init(const char *srcfn, unsigned int fixn);
        bool   init(float *data, const int row, const int dim);
        bool   config(const char *_seed_, const char *lg_first, const char *crtrn, int verbose);

        int    initIm(const unsigned int  nclust);
        int    initIs(const unsigned int nclust);
        int    clust(const unsigned int nclust, const char *dstfn, const int verbose);
        double optzIm(const unsigned int nIter, const int nclust);
        double optzIs(const unsigned int nIter, const int nclust);

        double l2nDst(double *D,  const unsigned int x, const unsigned int n);
        double crsDst(double Dsc, double *D,  const unsigned int x, const unsigned int n);
        double cosDst(double *D,  const unsigned int x, bool _plus_);
        double innDct(double *D,  const unsigned int x, bool _plus_);
        int    getL2norms(const unsigned int n, const unsigned int d0);

        double pairwDst(const int nclust);
        void   saveDistort(const char *dstFn);
        void   saveCandlDistort(const char *dstFn);
        void   saveMircoDistort(const char*dstFn);

        bool   refresh();
        void   saveCenters(const char *dstfn, bool append);
        int    fetchCenters(float *centers);

    protected:
        bool _INIT_, _REFER_;

    public:
        static void test();

};

#endif
