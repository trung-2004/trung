#include <stdio.h>
#include <math.h>
int chuViTamGiac(int a, int b, int c)
{
	int C = a+b+c;
	return C;
}
int main(){
	int a,b,c;
	do
	{
		printf("nhap a =");
		scanf("%d", &a);
		printf("nhap b =");
		scanf("%d", &b);
		printf("nhap c =");
		scanf("%d", &c);
	}while(!(a+b>c && a+c>b && b+c>a));
	int C = chuViTamGiac(a,b,c);
	printf("Chu vi tam giac : %d",C);
}
