#include <iostream>

#include "xtksums.h"
#include "xbksums.h"
#include "hartigan.h"
#include "seqkmeans.h"

#include <cstdlib>
#include <cstring>
#include <ctime>
#include <map>

using namespace std;

void help()
{
    const char *version = "1.38";
}

void test()
{

    ///XBKSums::test();
    XTKSums::test();
    ///Hartigan::test();
    ///SeqKMeans::test();
}


int main(int argc, const char *argv[])
{
    ///srand(time(NULL));
    test();
    exit(0);

    if(argc < 9)
    {
        help();
        exit(0);
    }

    int i = 0;
    map<string, const char*> arguments;

    for(i = 1; i < argc; i += 2)
    {
        arguments.insert(pair<string, const char*>(argv[i], argv[i+1]));
    }


    arguments.clear();
    return 0;
}
