#include <stdio.h>
int main(){
	int n;
	do
	{
	printf("Nhap n=");
	scanf("%d",&n);
	}while(n<0);
	
	int s=1;
	for(int i=1;i<=n;i++)
	s=s*i;
	printf("n!= %d",s);
}
