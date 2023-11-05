#include<stdio.h>
int main()
{
    int n,d=0,l=0;
    scanf("%d",&n);
    while(n > 0){
        d = n%10;
        if(d > l){
            l = d;
        }
        n /= 10;
    }
    printf("%d",l);
}