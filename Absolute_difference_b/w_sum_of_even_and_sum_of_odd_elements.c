#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum1=0,sum2=0,res;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0){
            sum1 += arr[i];
        }
        else {
            sum2 += arr[i];
        }
    }
    res = abs(sum1-sum2);
    printf("%d",res);
}