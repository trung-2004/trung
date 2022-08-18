#include <stdio.h>
int main(){
	int n;
	do
	{
	printf("nhap n > 0: ");
	scanf("%d",&n);
	}while(n <= 0);
	int a[n];
	for(int i=0 ; i<n ;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	int sum=0, max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] > 0){
			sum+=a[i];
			if(sum > max){
				max=sum;
			}
		}else{
			sum=0;
		}
	}
	printf("chuoi so duong co tong so duong lon nhat trong mang la: %d",max);
	return 0;
}
