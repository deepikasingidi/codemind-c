#include<stdio.h>
int main()
{
    int n,i=1;
    int m=1;
    scanf("%d",&n);
    while(i <= n){
        m *= i;
        i++;
    }
    printf("%d",m);
}