#include<stdio.h>
int main()
{
    int x;
    float o;
    scanf("%d",&x);
    if(x<=199)o=x*1.20;
    else if(x>=200 && x<400)o=x*1.50;
    else if(x>=400 && x<600)o=x*1.80;
    else if(x>600)o=x*2.00;
    if(o>400){
        printf("%.2f",o+o*15/100.0);
    }
    else{
        printf("%.2f",o+100);
    }
}