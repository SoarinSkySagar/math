#include<stdio.h>
float fx(float x, float y)
{
    return x*y;
}
int main()
{
    int i;
    float x0,y0,n,x,y,h;
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
        y=y0+(h*fx(x0,y0));
        x0=x0+h;
        y0=y;
        i++;
    }
    printf("\nAnswer=%.4f",y0);
}