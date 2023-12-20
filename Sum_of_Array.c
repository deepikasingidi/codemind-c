#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int add[n];
    for(int i=0; i<n; i++){
        scanf("%d",&add[i]);
        sum += add[i];
    }
    printf("%d",sum);
}