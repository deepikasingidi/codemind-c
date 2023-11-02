#include<stdio.h>
int main()
{
    int n1,n2,s=0,i;
    scanf("%d %d",&n1,&n2);
    for(i = n1; i <= n2; i++){
        int a = i,m=0;
        while(a){
            m = a%10;
            if(m == 0){
                s = 0;
                break;
            }
            if(i%m != 0){
                s = 0;
                break;
            }
            if(i%m == 0){
                s = 1;
            }
            a /= 10; 
        }
        if(s == 1){
            printf("%d ",i);
        }
    }
}