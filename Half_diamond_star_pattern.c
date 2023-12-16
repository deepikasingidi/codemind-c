#include<stdio.h>
int main()
{
    int n,clm=1;
    scanf("%d",&n);
    if(n>2){
    for(int i=1; i<n*2; i++){
        for(int j=1; j<=clm; j++){
            printf("*");
        }
        if(i<n){
            clm++;
        }
        else{
            clm--;
        }
        printf("
");
    }
    }
    if(n<3){
        printf("The pattern is not possible");
    }
}