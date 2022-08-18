#include <stdio.h>
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
	int x;
	printf("nhap x =  ");
	scanf("%d", &x);
	int k;
	
	bool f=false;
	for(int i=0;i<n;i++)
	{
		if(x == a[i]){
			printf("co so %d trong mang\n",x);
			f = true;
			break;
		}
	}
	if(f == false){
		printf("khong co so %d trong mang",x);
	}
	return 0;
}
