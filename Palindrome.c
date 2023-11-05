#include<stdio.h>
int main()
{
    int n,temp,r=0;
    scanf("%d",&n);
    temp = n;
    while(temp>0){
        r = r*10 + (temp%10);
        temp /= 10;
    }
    if(n == r){
        printf("True");
    }
    else{
        printf("False");
    }
}