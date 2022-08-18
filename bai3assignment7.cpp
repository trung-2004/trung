#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int n;
	do
	{
	printf("nhap n > 0: ");
	scanf("%d", &n);
	}while(n<=0);
	
	int a[n];
	for(int i=0; i<n ;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	int max=a[0];
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}
	printf(" doan [%d, %d] chua toan bo gia tri phan tu cua mang",min,max);
	return 0;
}
