#include<stdio.h>
int main ()
{
    int n,r=0;
    int temp = n;
    scanf("%d",&temp);
    while(temp != 0){
        r = r*10 + (temp%10);
        temp /= 10;
    }
    printf("%d",r);
}