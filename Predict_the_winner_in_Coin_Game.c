#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if(n>1 && m>1 && m%2==0 || n%2==0){
        printf("Player 1");
    }
    else{
        printf("Player 2");
    }
}