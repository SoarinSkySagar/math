#include <stdio.h>
float fn(float x,float y){
    return (x*x)+(y*y);
}
int main() {
    // Write C code here
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
    float k1,k2,k3,k4;
    for(j=0;j<n;j++){
        k1=h*fn(x0,y0);
        k2=h*fn(x0+h/2,y0+k1/2);
        k3=h*fn(x0+h/2,y0+k2/2);
        k4=h*fn(x0+h,y0+k3);
        y0=y0+(k1+2*k2+2*k3+k4)/6;
    }
    printf("Result: f(%f)=%f",x,y0);

    return 0;
}