#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    for(i=1; i<13; i++){
        m = i*n;
        printf("%d x %d = %d
",n,i,m);
    }
}