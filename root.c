#include<stdio.h>

float f(int x){
  float fx;
  fx = (x*x)-25;

  return fx;
}

void main()
{
  int x1,x2,y1,y2,e;
  
  puts("Enter value of x1,x2");
  scanf("%d%d",&x1,&x2);

  y1 = f(x1);
  y2 = f(x2);
  int i;
  int size;
  
  printf("x\t =f(x)\n");
  
  if((y1) = (y2)){
    printf("%d\n%d\n%d\n%d\n",x1,x2,y1,y2);
  }
  
  while((x1 - x2)/x1 > e){
    x2 = (x1 + x2)/2;
    y2 = x2;
    i = i +1;

  }
  if(y1 = y2){
    x1 = x2;
  }else
    {
      y1 = x2;}
  
  printf("%f\t%f\n",f(x2),f(y2));
  
}
