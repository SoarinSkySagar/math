#include <stdio.h>

int main() {
    // Write C code here
    int i,j,n;
    float x[50],y[50],xn,term,sum;
    printf("Enter the number of points: ");
    scanf("%d",&n);
    printf("Enter X values:\n");
    for(i=0;i<n;i++){
        printf("Enter x[%d]: ",i);
        scanf("%f",&x[i]);
    }
    for(i=0;i<n;i++){
        printf("Enter y[%d]: ",i);
        scanf("%f",&y[i]);
    }
    printf("Enter the interpolating point: ");
    scanf("%f",&xn);
    sum=0;
    for(j=0;j<n;j++){
        term=1;
        for(i=0;i<n;i++){
            if(i!=j)
            term*=(xn-x[i])/(x[j]-x[i]);
    }
    sum+=term*y[j];
    }
    printf("Result: %f",sum);

    return 0;
}