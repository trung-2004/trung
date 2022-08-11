#include <stdio.h>
int main(){	
    int n,m,max;
    max=0;
	do{	
	printf("nhap so nguyen duong n=");
	scanf("%d",&n);
	}while(n<0 && printf("khong phai so nguyen duong\n"));
	while(n>0){
		m=n%10;
		n/=10;
		if(m>max)
			max=m;
	}
	printf("chu so lon nhat cua so nguyen duong la: %d",max);	
}
