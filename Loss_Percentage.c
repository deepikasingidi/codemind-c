#include<stdio.h>
int main()
{
    float x,y;
    double l;
    scanf("%f %f",&x,&y);
    l=(x-y)/x;
    printf("%.2lf",l*100);
}