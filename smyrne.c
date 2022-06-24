#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double smyrne(int n,int p_n ,int q_n){
    int i;
    double q_n_next,p_n_next;
    double quotient;
    for(i=1;i<=n;i++){
        p_n_next = p_n + (2*q_n);
        q_n_next = q_n + p_n;
        p_n = p_n_next;
        q_n = q_n_next;
    }
    quotient = (p_n_next/q_n_next);
    return quotient;
}

int main(){
    int p_n = 1 ;
    int q_n = 1;
    int n;
    double res;
    printf("Approximation de sqrt(2) par la méthode de Smyrne\n");
    for(n=1;n<=20;n++){
        res = smyrne(n,p_n,q_n);
        printf("Pourn = %d on a sqrt(2) = %lf\n",n,res);
    }
}