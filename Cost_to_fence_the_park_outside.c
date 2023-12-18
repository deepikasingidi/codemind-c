#include<stdio.h>
int main()
{
    int o,l,b,w,c,r;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    o = ((l+2*w)*(b+2*w))-l*b;
    r = o*c;
    printf("%d",r);
}