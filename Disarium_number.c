#include<stdio.h>
#include<math.h>
int main()
{
    int n,cnt =0;
    scanf("%d",&n);
    int temp1 = n;
    while(temp1 > 0){
        temp1%10;
        cnt++;
        temp1 /= 10;
    }
    int ld=0,sum=0,temp2=n,r;
    while(temp2 != 0){
        ld = temp2%10;
        r = pow(ld,cnt);
        sum = sum+r;
        cnt--;
        temp2 /= 10;
    }
    if(sum == n)printf("True");
    else printf("False");
}