#include<stdio.h>
int main()
{
	int n1,n2,max,lcm;
	scanf("%d %d",&n1,&n2);
	max = (n1>n2)?n1:n2;
	while(max>0){
	    if(max%n1==0 && max%n2==0){
	    	lcm = max;
	    	break;
    	}
	max++;
	}
	printf("%d",lcm);
}