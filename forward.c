#include<stdio.h>
int main()
{
    float a[100][100],x,sum,term,h,p;
    int i,j,n;
    printf("\nEnter the number of data points:");
    scanf("%d",&n);
    printf("\nEnter x:");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i][0]);
    }
    printf("\nEnter y:");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i][1]);
    }
    for(j=2;j<n+1;j++)
    {
        for(i=0;i<n-j+1;i++)
        {
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(a[i][j]==0.0)
            {
                break;
            }
            printf("%.2f\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the value of x:");
    scanf("%f",&x);
    h=a[1][0]-a[0][0];
    p=(x-a[0][0])/h;
    sum=a[0][1];
    term=1.0;
    for(j=2;j<n+1;j++)
    {
        term*=(p-j+2)/(j-1);
        sum+=term*a[0][j];
    }
    printf("\nAnswer:%.2f",sum);
    return 0;
}