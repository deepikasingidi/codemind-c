#include<stdio.h>
int main()
{
    int n,l,f,s=0;
    scanf("%d",&n);
    l = n%10;
    f = n;
    while(n >= 10){
        n = n/10;
    }
    f = n;
    s = f+l;
    printf("%d",s);
}