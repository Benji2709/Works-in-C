#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double madhava(int n){
    double pi = 0;
    int i;
    for(i=0;i<=n;i++){
        pi =  pi + pow((-1),i) / (2*i+1);
    }
    return 4*pi;
}
