#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    for(int i=a; i<=b; i++){
        temp = i;
        int r = 0;
        while(temp > 0){
            r = r*10 + (temp%10);
            temp /= 10;
        }
        if(i==r){
                printf("%d ",r);
            }
    }
}