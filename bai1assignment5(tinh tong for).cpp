#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do
	{
	printf("Nhap n=");
	scanf("%d",&n);
	}while(n<0);
	
	float sum=0;
	for(float i=1;i<=n;i++)
		sum += (1/(i));
	printf("tong S=%f",sum);
}
