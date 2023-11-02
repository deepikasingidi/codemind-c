#include<stdio.h>
int main()
{
    int n1,n2,cnt=0,i;
    scanf("%d %d",&n1,&n2);
    for(i = n1; i <= n2; i++){
        if(i%3 == 0){
            cnt++;
        }
    }
    printf("%d",cnt);
}