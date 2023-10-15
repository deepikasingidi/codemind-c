#include<stdio.h>
int main()
{
    float x,y;
    double p;
    scanf("%d %d",&x,&y);
    p = (y - x) / x ;
    printf("%.2lf",p*100);
}