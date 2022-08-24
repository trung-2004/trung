#include <stdio.h>
void daoNguocMang(int arr[], int n)
{
	for(int i=n-1; i>=0; i--)
	{
		printf("%d\t",arr[i]);
	}
}
int main(){
	int n;
	do
	{
		printf("nhap n > 0: ");
		scanf("%d", &n);
	}while(n<=0);
	
	int arr[n];
	for(int i=0; i<n; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("mang sau khi nhap vao la: ");
	for(int i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nmang sau khi dao nguoc la: ");
	daoNguocMang(arr, n);
}
