#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d",&x);
    if((x%10) == 0){
        printf("%d",x/10);
    }
    else if((x%10) == 5){
        printf("%d",(x/10)+1);
    }
    else{
        printf("-1");
    }
}