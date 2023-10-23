#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,x,y;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    if(x>y){
        printf("%d",((k*x)+((n-k)*y)));
    }
    else{
        printf("%d",((k*x)+((n-k)*x)));
    }
}