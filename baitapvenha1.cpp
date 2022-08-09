#include <stdio.h>
int main(){
	int n,i;
	printf("nhap n=");
	scanf("%d",&n);
	i=1;
	if(n<=0){
		printf("so n khong phu hop, vui long nhap lai");
	}else{
	while(i<n){
	printf("%d\t",i);
		i+=2;
		}
	}
}
