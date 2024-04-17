#include<stdio.h>
#include<math.h>
int main() 
{
    float a[100][100],oldx[100],newx[100],b[100],sum,tol;
    int n,i,j,c;
    printf("\nEnter the number of equations:");
    scanf("%d", &n);
    printf("\nEnter the tolerance:");
    scanf("%f", &tol);
    printf("\nEnter the coefficients:");
    for(i=0;i<n;i++) 
    {
        for(j=0;j<n;j++) 
        {
            scanf("%f", &a[i][j]);
        }
    }
    printf("\nEnter the constants:");
    for(i=0;i<n;i++) 
    {
        scanf("%f", &b[i]);
    }
    for(i=0;i<n;i++) 
    {
        oldx[i]=0;
        newx[i]=0;
    }
    do {
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<n;j++) 
            {
                if(i!=j) 
                {
                    sum+=a[i][j]*newx[j];
                }
            }
            oldx[i]=newx[i];
            newx[i]=(b[i]-sum)/a[i][i];
        }
        c=0;
        for(i=0;i<n;i++) 
        {
            if(fabs(oldx[i]-newx[i])<tol) 
            {
                c++;
            }
        }
    } while(c<n);
    printf("\nAnswers:");
    for(i=0;i<n;i++) 
    {
        printf("\nx[%d] = %f", i, newx[i]);
    }
    
    return 0;
}