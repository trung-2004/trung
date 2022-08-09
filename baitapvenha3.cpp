#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int i=1;
	if(n<=0){
		printf("so n khong phu hop, vui long nhap lai");
	}
	while(i<=n){
		if(n%i==0){
		printf("%d\t",i);}
		i++;
	}
}
