#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define SEED 35791246

double calcul_quotient(int n){
    double nbre_point_cercle = 0;
    float distance;
    int i; 
    double x,y;

    for(i=1;i<=n;i++){
        x = (double)rand()/RAND_MAX;
        y = (double)rand()/RAND_MAX;
        distance = pow(x,2)+pow(y,2);
        if(distance<= 1){
            nbre_point_cercle++;
        }
        
    }
    return(nbre_point_cercle/n);
}
