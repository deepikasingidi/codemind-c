#include<stdio.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1; i<=n/2; i++){
        if(n%i == 0){
            cnt++;
        }
    }
    if(cnt == 1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}