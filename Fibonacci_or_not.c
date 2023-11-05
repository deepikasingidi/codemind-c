#include<stdio.h>
 int main()
 {
    int n,a=0,b=1,c;
    scanf("%d",&n);
    while(a <= n){
        c = a+b;
        a = b;
        b = c;
        if (n == c){
            break;
        } 
    }
    if (n == c){
        printf("True");
    }
    else{
        printf("False");
    }
 }