#include<stdio.h>
int main()
{
    int n;
    float ave,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    ave = sum/n;
    printf("%.2f",ave);
}