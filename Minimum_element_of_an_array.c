#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; ++i){
        scanf("%d",&arr[i]);
        if(arr[0]>arr[i]){
            arr[0]= arr[i];
        }
    }
    printf("%d",arr[0]);
}