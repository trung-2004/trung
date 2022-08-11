#include <stdio.h>
int main(){
	int n,m,max;
	max=0;
	printf("nhap so nguyen n=");
	scanf("%d",&n);
	if(n<0)
		n*=(-1);
	while(n>0){
		m=n%10;
		n/=10;
		if(m>0)
		max=m;
	}
	printf("so dau tien la so: %d",max);
}
