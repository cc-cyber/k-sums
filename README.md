# k-sums

1. About the codes

   This is the implementation of proposed methods k-sums-Im, k-sums-Is and their bisecting versions. From this package, user could also find the implementations for Sequential k-means and Sequential k-sums. Please see the checklist below for more details.

   ```
   xtksums.h xtksums.cpp: k-sums-Im and k-sums-Is  
   xbksums.h xbksums.cpp: bisecting k-sums-Im and k-sums-Is
   seqkmeans.h seqkmeans.cpp: Sequential k-means and Sequential k-sums
   ```

2. Compilation

   The codes should be compiled with g++ 5.4.0 or later. 
   To compile it, user only needs to run `make Makefile` under the source code directory

3. Run
  To run the above mentioned methods, user is recommended to call `test()` function in `main.cpp`. Dataset SIFT100K is attached with this package