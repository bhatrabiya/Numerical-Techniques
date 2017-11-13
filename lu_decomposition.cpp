************** LU Decomposition for solving linear equations ***********/
#include<iostream.h>

int main()
{
    int n,i,k,j,p;
    float a[10][10];
    float l[10][10]={0};
    float u[10][10]={0};
    float sum,b[10],z[10]={0},x[10]={0};
    
    puts("Enter the order of matrix ! ");
    scanf("%d",& n);
    puts("Enter all coefficients of matrix : ");
    for(i=1;i<=n;i++)
    {
      printf("\nRow %d", i);
        for(j=1;j<=n;j++)
	  scanf("%f",&a[i][j]);
    }
    puts("Enter elements of b matrix\n");
    for(i=1;i<=n;i++)
      scanf("%f",&b[i]);
    //********** LU decomposition *****//
    for(k=1;k<=n;k++)
    {
        u[k][k]=1;
        for(i=k;i<=n;i++)
        {
            sum=0;
            for(p=1;p<=k-1;p++)
                sum+=l[i][p]*u[p][k];
            l[i][k]=a[i][k]-sum;
        }

        for(j=k+1;j<=n;j++)
        {
            sum=0;
            for(p=1;p<=k-1;p++)
                sum+=l[k][p]*u[p][j];
            u[k][j]=(a[k][j]-sum)/l[k][k];
        }
    }
    //******** Displaying LU matrix**********//
    printf("\n\nLU matrix is");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<l[i][j]<<"  ";
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<u[i][j]<<"  ";
        printf("\n");
    }

    //***** FINDING Z; LZ=b*********//

    for(i=1;i<=n;i++)
    {                                        //forward subtitution method
        sum=0;
        for(p=1;p<i;p++)
        sum+=l[i][p]*z[p];
        z[i]=(b[i]-sum)/l[i][i];
    }
    //********** FINDING X; UX=Z***********//

    for(i=n;i>0;i--)
    {
        sum=0;
        for(p=n;p>i;p--)
            sum+=u[i][p]*x[p];
        x[i]=(z[i]-sum)/u[i][i];
    }
    //*********** DISPLAYING SOLUTION**************//
    printf("\n\nSet of solution is\n");
    for(i=1;i<=n;i++)
      printf("%f",x[i]);

    
    return 0;
}
