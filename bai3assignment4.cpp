#include <stdio.h>
int main(){
	int n,m;
	printf("nhap so nguyen n=");
	scanf("%d",&n);
	if(n<0)
		n*=(-1);
	int s=0;
	while(n>0){	
	m=n%10;
	n=n/10;
	s+=m;
	}
	printf("tong cac chu so trong n: %d",s);
}
