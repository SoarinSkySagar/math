#include<stdio.h>

int main () 
{
    int n,i,j,k;
    float a[100][100],x[100],sum,m;
    printf("\nEnter the number of equations:");
    scanf("%d",&n);
    printf("\nEnter the coefficients and constants:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("\nAugmented matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%.2f\t",a[i][j]);
        }
        printf("\n");
    }
    for(k=0;k<n;k++)
    {
        for(i=k+1;i<n;i++)
        {
            m=a[i][k]/a[k][k];
            for(j=0;j<n+1;j++)
            {
                a[i][j]=a[i][j]-m*a[k][j];
            }
        
        }    
    }
    printf("\nEchelon form:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%.2f\t",a[i][j]);
        }
        printf("\n");
    }
    x[n-1]=a[n-1][n]/a[n-1][n-1];
    for(i=n-2;i>=0;i--)
    {
        sum=0.0;
        for(j=i+1;j<n;j++)
        {
            sum=sum+(a[i][j]*x[j]);
        }
        x[i]=(a[i][n]-sum)/a[i][i];
    }
    for(i=0;i<n;i++)
    {
        printf("\n The answers:\nx[%d]=%.2f",i,x[i]);
    }
    return 0;
}