#include<stdio.h>
int main()
{
    int n,ld,sum=0,p=1;
    scanf("%d",&n);
    while(n>0){
        ld = n%10;
        sum = sum + ld;
        p = p*ld;
        n /= 10;
    }
    if(sum == p){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}