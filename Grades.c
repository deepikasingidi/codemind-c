#include<stdio.h>
int main()
{
    int a,b,c,d,e,o;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    o=(a+b+c+d+e)/5;
    if(o>=90){
        printf("Grade A");
    }
    else if(o>=80){
        printf("Grade B");
    }
    else if(o>=70){
        printf("Grade C");
    }
    else if(o>=60){
        printf("Grade D");
    }
    else if(o>=40){
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }
}