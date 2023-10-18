#include<stdio.h>
int main()
{
    int x;
    double a,b,c;
    scanf("%d",&x);
    a = x + (0.8*x) + (0.2*x);
    b = x + (0.9*x) + (0.25*x);
    c = x + (0.95*x) + (0.3*x);
    if(x <= 10000){
        printf("%.2lf",a);
    }
    else if(x <= 20000){
        printf("%.2lf",b);
    }
    else{
        printf("%.2lf",c);
    }
}