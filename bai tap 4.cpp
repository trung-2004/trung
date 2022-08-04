#include <stdio.h>
int main(){
	
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("nhap c=");
	scanf("%d",&c);
	
	int max;
	max= b;
	
	if(a>max){
		printf("max = %d",a);
	}else{
		if(c>max){
			printf("max = %d",c);
		}else{
			printf("max = %d",b);
		}
	}
	
}
