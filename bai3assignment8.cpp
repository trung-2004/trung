#include <stdio.h>
int tongCacChuSo(int n)
{
	int m;
	int s=0;
	for(int i=0; i<n; i++)
	{
		m=n%10;
		n/=10;
		s+=m;
	}
	return s;
}
int main(){
	int n;
	printf("nhap n > 0: ");
	scanf("%d", &n);
	int sum = tongCacChuSo(n);
	printf("tong cac chu so la : %d",sum);
}
