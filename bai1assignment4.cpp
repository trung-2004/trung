#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int s=0;
	if(n<=0)
		printf("so nhap khong phu hop");
	else{
		for(int i=1;i<=n;i++){
			if(n%i==0){
				printf("%d\t",i);
				s=s+i;
			}
		}
		printf("\ntong cac uoc cua %d la: %d",n,s);	
	}
}
