#include<stdio.h>
int main()
{
    int n,m,r,cnt=0;
    scanf("%d",&n);
    while(n >= 1){
        n /= 10;
        cnt++; 
    }
    printf("%d",cnt);
}