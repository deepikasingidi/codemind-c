#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],cnt=0,m;
    for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for( int i=0; i<n; i++){
        if(arr[i]==m){
            cnt++;
        }
    }
    if(cnt > 0){
    printf("True");
    }
    else printf("False");
}