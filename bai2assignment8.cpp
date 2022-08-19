#include <stdio.h>
#include <math.h>
float dienTichTamGiac(int a, int b, int c)
{
	int C = a+b+c;
	float p =(float)C/2;
	float s =sqrt((p*(p-a)*(p-b)*(p-c)));
	return s;
}
int main(){
	int a,b,c;
	do
	{
		printf("nhap a = ");
		scanf("%d", &a);
		printf("nhap b = ");
		scanf("%d", &b);
		printf("nhap c = ");
		scanf("%d", &c);
	}while(!(a+b>c && a+c>b && b+c>a));
	float s = dienTichTamGiac(a,b,c);
	printf("Dien tich tam giac : %f",s);
}
