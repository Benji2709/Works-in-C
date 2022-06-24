#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "Montecarlo.h"
#include "Madhava.h"
#include "Wallis.h"
#define SEED 35791246



int main(){
    int menu;
    int n;
    double quotient;
    printf("Approximation du nombre pi\n");
    printf("1.Méthode de Monte Carlo\n");
    printf("2.Méthode de Madhava de Sangamagrama\n");
    printf("3.Méthode de John Wallis\n");
    printf("Choissisez un menu:\n");
    scanf("%d",&menu);
    switch(menu){
        case 1:
        
        
        printf("Approximation du nombre pi\n");
        printf("par la méthode de Monte Carlo\n");
        printf("D'après la méthode de Monte Carlo dans le cercle unité\n");
        for(n=1;n<=100000000;n=n*10){
            quotient = calcul_quotient(n);
            printf("Pour %d points on a pi = %lf\n",n,4*quotient);
        }

        break;
        case 2:
        printf("Approximation du nombre pi avec la méthode de Madhava de Sangamagrama\n");
        printf("entrez un entier n:\n");
        scanf("%d",&n);
        madhava(n);
        for(n=1;n<=100000000;n=n*10){
            printf("Pour n=%d on a pi = %lf\n",n,madhava(n));
        }
        break;
        case 3:
        printf("Approximation du nombre pi\n");
        printf("par la méthode de John Wallis\n");
        printf("entrez un entier n:\n");
        scanf("%d",&n);
        wallis(n);
        for(n=1;n<=10000000;n=n*10){
            printf("pour k=%d pi vaut=%lf\n",n,wallis(n));   
        }
        break;
    }
}