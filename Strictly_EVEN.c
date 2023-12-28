#include<stdio.h>
int main()
{
    int n,res;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(i%2==0 && arr[i]%2!=0 && arr[i]==0){
            res = 0;
            break;
        }
        else if(i%2!=0 && arr[i]%2==0 && arr[i]!=0){
            res = 0;
            break;
        }
        else if(i%2==0 && arr[i]%2==0) res = 1;
    }
    if(res == 1){
        printf("True");
    }
    else printf("False");
}