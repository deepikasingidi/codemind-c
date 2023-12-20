#include<stdio.h>
int main()
{
    int n;
    while(n!=0){
        scanf("%d",&n);
        if(n != -1){
            printf("%d
",n*n);
        }
        else if(n == -1){
            break;
        }
    }
}