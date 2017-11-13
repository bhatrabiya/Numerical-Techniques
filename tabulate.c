#include<stdio.h>

float func(int x){
  float fx;
  fx = 6*x-9;

  return fx;
}

void main()
{
  int min,max,x,y,d;

  puts("Enter value of min and max");
  scanf("%d",&min);
  scanf("%d",&max);

  puts("change in x");
  scanf("%d\n",&d);
  
  printf("x\t = f(x)\n");
    x = min;
  while(x <= max){
    y = func(x);
   printf("%d\t%f\n",x,func(x));
    x = x + d;
   }
}

