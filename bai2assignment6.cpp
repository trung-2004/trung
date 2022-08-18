#include <stdio.h>
int main(){
	int n;
	float tbc,s;
	s=0;
	do
	{
		printf("nhap n >0 :");
		scanf("%d",&n);
	}while(n <= 0);
	int a[n];
	for(int i=0 ; i<n ; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	printf("so le o vi tri chan trong mang la: ");
	int demle = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(i%2 == 0){
			if(a[i]%2 == 1)
			{
			printf("a[%d] = %d\t",i, a[i]);
			s=s+a[i];
			demle++;
			tbc=s/demle;
			}
		}	
	}
	printf("\ntong cac so le: %f\n", s);
	printf("trung binh cong cac so le la: %f", tbc);
	return 0;
}
