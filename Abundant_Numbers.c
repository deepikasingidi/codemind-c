#include<stdio.h>
int main()
{
    int n,sum=0,i;
    int temp = n;
    scanf("%d",&n);
    for(i = 1; i < temp; i++){
        if(temp%i == 0){
            sum = sum + i;
        }
    }
    if(sum > n){
        printf("True");
    }
    else{
        printf("False");
    }
}