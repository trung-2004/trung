#include <stdio.h>
int main(){
	
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	
	if(a>=0){
		if(a>0){
			printf("%d la so duong",a);
		}else{
			printf("%d la so 0",a);
		}
	}else{
		printf("%d là so am",a);
	}
	
}
