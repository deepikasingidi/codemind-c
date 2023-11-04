#include<stdio.h>
int main ()
{
    int n,sum=0;
    scanf("%d",&n);
    int temp = n;
    int s = temp * temp;
    while (s)
    {
        int ld = s%10;
        s /= 10;
        sum = sum + ld;
    }
    if(sum == n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}