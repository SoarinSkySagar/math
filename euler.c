#include <stdio.h>
float fn(float x,float y){
    return y;
}

int main() {
    float x0,y0,x,y,h,n;
    int j;
    printf("Enter the initial value of x: ");
    scanf("%f",&x0);
    printf("Enter the initial value of y: ");
    scanf("%f",&y0);
    printf("Enter h: ");
    scanf("%f",&h);
    printf("Enter x: ");
    scanf("%f",&x);
    n=(x-x0)/h;
    for( j=0;j<n;j++){
        y=y0+h*fn(x0,y0);
        x0=x0+h;
        y0=y;
    }
    printf("f(%f): %f",x0,y);
    
    return 0;
}