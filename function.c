#include<stdio.h>

float fun(int x){
  
  float fx;
  fx = 4*x-9;
  
  return fx;
}

void main()
{

  float x;
  int i =0;
  printf("x\t=f(x)\n");

  while(i <= 20){
    printf("%d\t,%f\n",i,fun(i));
    i++;
  }
}
    
