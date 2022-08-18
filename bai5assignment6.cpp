#include <stdio.h>
int main(){
	int n,i;
	do
	{
	printf("nhap n > 0: ");
	scanf("%d", &n);
	}while(n < 0);
	int a[n];
	for(int i=0 ; i<n ; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	int min = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(a[i] > 0)
			min = a[i];
	}
	if(min != 0)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i] > 0 && a[i] < min)
			min = a[i];
		}
			printf("so duong nho nhat la: %d", min);
	}else{
		printf("khong co so duong trong mang");
	}
	return 0;
}
