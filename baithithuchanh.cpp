#include <stdio.h>
int main(){
	int n;
	printf("nhap so nguyen n = ");
	scanf("%d", &n);
	float sum = 0;
	if( n>0 ){
		for(int i=1; i<=n; i++)
		{
			sum += (1.0/(i));
		}
		printf("tong S(n) = %f",sum);
	}else{
		printf("nhap loi, n phai lon hon hoac bang 1 ");
	}
}
