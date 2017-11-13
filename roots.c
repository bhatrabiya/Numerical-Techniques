#include<stdio.h>
#include<math.h>
#define epsilon 0.0000000001

float fun(float x){
  float y;
  y = (x)*(x) -25;
  return y;
}
void main()
{

  int i = 1;
  float x0,x1,x2;
  double f0,f1,f2;

  puts("Enter value of x0");
  scanf("%f",&x0);

  puts("Enter value of x1");
  scanf("%f",&x1);

  printf("\n*********************************************");
  printf("\n iterations\t  x0\t  x1\t  x2\t  f0\t  f1\t  f2\t");

  while((x1-x2)/x1>epsilon){
    x2 = (x0+x1)/2;
    f0 =fun(x0);
    f1 =fun(x1);
    f2=fun(x2);

    printf("\n%d %f\t %f\t %f\t %lf\t %lf\t %lf\t",i,x0,x1,x2,f0,f1,f2);
    if(f0*f1<0)
      {
	x0 = x2;
      }
    else
      {
	x1 = x2;
      }
    i++;
  }
  printf("root is: %f",x2);
}
