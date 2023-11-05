#include<stdio.h>
int main()
{
    int n1,n2,sum1=0,sum2=0;
    scanf("%d %d",&n1,&n2);
    for(int i =1; i < n1; i++){
        if(n1%i == 0){
        sum1 = sum1 + i;
        }
    }
    for(int a=1; a < n2; a++){
        if(n2%a == 0){
            sum2 = sum2 + a;
        }
    }
    if(sum1 == n2 && sum2 == n1){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}
