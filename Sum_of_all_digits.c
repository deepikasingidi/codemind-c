#include<stdio.h>
int main()
{
    int n,m,s=0;
    scanf("%d",&n);
    while(n >= 1){
        m = n%10;//3   2   1 
        s = s+m;//3    2   1
        n = n/10;//12  1   0
    }
    printf("%d",s);
}