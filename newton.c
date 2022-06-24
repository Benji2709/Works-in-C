#include <stlidb.h>
#include <stdio.h>
#include <math.h>

double newton(int n){
    int i;
    double racine=1;
    for(i=1;i<=n;i++){
        racine = (racine/2)+(1/racine);
    }
    return racine;
}
