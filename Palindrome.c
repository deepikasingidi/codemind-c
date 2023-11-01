#include<stdio.h>
int main()
{
    int x,n,r=0;
    scanf("%d",&x);
    n = x;
    while(n>0){
        r = r*10 + (n%10);
        n = n/10;
    }
        if(r == x){
            printf("Palindrome");
        }
        else{
           printf("Not Palindrome");
        }
}