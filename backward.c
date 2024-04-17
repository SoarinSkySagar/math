#include<stdio.h>

int main () 
{ 
    float ax[100][100], u, h, x, sum, term;
    int n, i, j, k;
    
    printf("\nEnter the value of n:\n");
    scanf("%d", &n);
    
    printf("\nEnter the values of x and y (separated by space):\n");
    for (i = 0; i < n; i++)
        scanf("%f%f", &ax[i][0], &ax[i][1]);
    

    for (j = 2; j <= n; j++) // Compute backward differences
    {
        for (i = 0; i <= n - j; i++)
        {
            ax[i][j] = ax[i+1][j-1] - ax[i][j-1];
        }
    }
    
    // Print x, y, and difference table
    for (i = 0; i < n; i++)
    {
        printf("%.2f\t%.2f\t", ax[i][0], ax[i][1]);
        for (j = 2; j <= i + 2; j++)
        {
            printf("%.2f\t", ax[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the value of x for which the value of y is wanted:\n");	  
    scanf("%f", &x);
    
    h = ax[1][0] - ax[0][0];
    u = (x - ax[0][0]) / h;
    
    sum = ax[0][1];
    term = 1.0;
    for (j = 2; j <= n + 1; j++)
    {
        term *= (u - j + 2) / (j - 1);
        sum += term * ax[0][j];
    }
    
    printf("\nAnswer=%.5f\n", sum);
    
    return 0;
}