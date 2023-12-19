#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        int n,j,s,cnt=0;
        scanf("%d",&n);
        for(j=1; j<=n/2; j++){
            s = j*j;
            if(s == n){
                cnt++;
            }
        }
        if(cnt == 1){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }
}