#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a; i<=b; i++){
        int cnt=0;
        for(int j=1; j<=i/2; j++){
            if(i%j==0){
                cnt++;
            }
        }
        if(cnt==1){
            printf("%d
",i);
        }
    }
}