#include <stdlib.h>
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

int main(){
    int n;
    for(n=1;n<=100000;n=n*10){
        printf("Pour N=%d itération(s) on sqrt(2)=%lf\n",n,newton(n));
    }

}