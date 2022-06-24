#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double suite_Halley(int n){
    float racine = 1;
    int i;
    for(i=1;i<=n;i++){
      racine = racine * ((pow(racine,2)+6)/(3*pow(racine,2)+2));  
    }
    return racine;
}

int main(){
    int n;
    printf("Approximation de sqrt2 par la méthode de Halley\n");
    for(n=1;n<=1000;n=n*10){
        printf("Pour n=%d itération(s) on a sqrt(2)=%lf\n",n,suite_Halley(n));
    }
}