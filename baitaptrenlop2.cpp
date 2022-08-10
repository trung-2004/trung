#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so nguyen n=");
	scanf("%d",&n);
	if(n<2)
		printf("so %d khong phai la so nguyen to",n);
	else{
		int i=2;
		int m=0;
		while(i<=sqrt(n)){
			if(n%i==0)
				m=1;
			i++;
		}
		if(m==0)
			printf("so %d la so nguyen to",n);
		else
			printf("so %d khong phai so nguyen to",n);
	}
}
