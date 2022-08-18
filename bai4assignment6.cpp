#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
	for(int i=0 ; i<n ; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	printf("so le trong mang la: ");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
			printf("\t%d",a[i]);
	}
	bool f=false;// ki thuat dat co, neu khong co so le thi se in ra khong co trong danh sach
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]%2 == 1){
			printf("\nso le cuoi cung la : %d",a[i]);
			f = true;
			break;
		}
	}
	if(f == false)
		printf("khong co so le nao trong danh sach");
	return 0;
}
