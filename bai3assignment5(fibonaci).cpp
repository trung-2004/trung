#include <stdio.h>
int main(){
	int n;
	do
	{
		printf("nhap n=");
	scanf("%d",&n);
	}while(n<0);
	if(n==1)
	printf("0");
	if(n==2)
	printf("1");
	if(n>2)
	{
		long long fn,fn2=0,fn1=1;
		for(int i=2;i<n;i++){
			fn=fn2+fn1;
			fn2=fn1;
			fn1=fn;
		}
		printf("%lld",fn);
	}
}
