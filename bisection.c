#include<stdio.h>
#include<math.h>
#define ESP 0.00001
#define F(x) (x)*(x) - 36

void main()
{
  int i = 1;
  float x0,x1,x2;
  double f1,f2,f0,t;

  puts("Enter value of x0:");
  scanf("%f",&x0);

  puts("Enter value of x1:");
  scanf("%f",&x1);

  printf("\n");
  printf("\niterations\t   x0\t   x1\t   x2\t   f0\t   f1\t   f2\t");
  printf("\n");

  do
    {
     x2 = (x0 + x1)/2;
     f0 = F(x0);
     f1 = F(x1);
     f2 = F(x2);
     printf("\n%d\t %f\t %f\t %f\t %lf\t %lf\t %lf\t", i,x0,x1,x2,f0,f1,f2);
     if(f0*f2 < 0)
    {
      x1 = x2;
    }
     else
    {
      x0 = x2;
    }
     i++;
    }while(fabs(f2) > ESP);

     printf("\n");
     printf("\n\nApp.root = %f",x2);
	 }
