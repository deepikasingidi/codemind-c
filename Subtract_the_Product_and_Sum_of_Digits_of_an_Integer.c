#include<stdio.h>
#include<math.h>
int main()
{
    int n,ld,sum=0,pro=1,dif;
    scanf("%d",&n);
    while(n>0){
        ld = n%10;
        sum += ld;
        pro *= ld;
        n /= 10;
    }
    dif = abs(sum - pro);
    printf("%d",dif);
}