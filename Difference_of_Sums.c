#include<stdio.h>
#include<math.h>
int main()
{
	int n,sq,sqm=0,sum=0,sr,dif;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		sq = i*i;
		sqm += sq;
		sum += i;
	}
	sr = sum*sum;
	dif = abs(sqm-sr);
	printf("%d",dif);
}