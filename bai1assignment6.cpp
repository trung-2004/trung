#include <stdio.h>
int main(){
	int n,sum;
	float tbc;
	sum = 0;
	do
	{
		printf("nhap n >0 :");
		scanf("%d", &n);
	}while(n <= 0);
	int a[n];
	for(int i=0 ; i<n ; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	int demle = 0;
	printf("cac so le la:\t ");
	for(int i=0 ; i<n ; i++)
	{
		if(a[i] % 2 == 1){
			printf("%d\t", a[i]);
			sum = sum + a[i];
			demle++;
		}
	}
	printf("\ntong cac so le: %d\n", sum);
	if(demle > 0){
		tbc = (float)sum/demle;
		printf("trung binh cong cac so le la: %f", tbc);
	}else{
		printf("khong co so le nao trong mang");
	}
	return 0;
}
