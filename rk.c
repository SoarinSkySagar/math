#include<stdio.h>
#include<math.h>
float fx(float x, float y)
{
    return 1/log(x+y);
}
int main()
{
    int i;
    float x0,y0,n,x,y,h,k1,k2,k3,k4;
    printf("\nEnter x0:");
    scanf("%f",&x0);
    printf("\nEnter y0:");
    scanf("%f",&y0);
    printf("\nEnter h:");
    scanf("%f",&h);
    printf("\nEnter x:");
    scanf("%f",&x);
    n=(x-x0)/h;
    i=0;
    while(i<n)
    {
        k1=h*fx(x0,y0);
        k2=h*fx(x0+(h/2),y0+(k1/2));
        k3=h*fx(x0+(h/2),y0+(k2/2));
        k4=h*fx(x0+h,y0+k3);
        y=y0+((k1+(2*k2)+(2*k3)+k4)/6);
        x0=x0+h;
        y0=y;
        i++;
    }
    printf("\nAnswer=%.4f",y0);
}