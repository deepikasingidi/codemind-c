#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int j=1; j<=t; j++){
		int l,k,cnt=0,ld;
		scanf("%d %d",&l,&k);
	    for(int i=l; i<=k; i++){
	    	ld = i%10;
        		if(ld == 2 || ld == 3 || ld == 9){
		    	cnt++;
		    }
    	}
    	printf("%d
",cnt);
    }
}