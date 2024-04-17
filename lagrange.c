#include<stdio.h>
int main()
{
    float a[100],y[100],term,sum,x;
    int n,i,j;
    sum=0;
    printf("\nEnter the number of terms:");
    scanf("%d",&n);
    printf("\nEnter x:");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("\nEnter y:");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    printf("\nx:\t");
     for(i=0;i<n;i++)
    {
        printf("%.2f\t",a[i]);
    }
    printf("\n");
    printf("\ny:\t");
     for(i=0;i<n;i++)
    {
        printf("%.2f\t",y[i]);
    }
    printf("\n");
    printf("\nEnter the interpolating point:");
    scanf("%f",&x);
    for(i=0;i<n;i++)
    {
        term=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                term*=(x-a[j])/(a[i]-a[j]);
            }
        }
        sum+=term*y[i];
    }
    printf("\nAnswer is %.2f",sum);
    return 0;
}