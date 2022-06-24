#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double wallis(int n){
    double p, pi=2;
  for (int i=1; i<=n; ++i){
    pi *= (p=4.0*i*i)/(p-1);
  }
  return pi;
    
}
