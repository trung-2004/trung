#include <stdio.h>
int main(){
	int n,max;
	printf("Nhap n=");
	scanf("%d",&n);
	int i=1;
	max=0;
	if(n<=5){
		printf("So n khong phu hop, vui long nhap lai");
	}else{
	printf("So chia het cho 2 va 3 và nho hon %d la:",n);
	while(i<n){
		if(i%6==0){
			if(i>max){
				max=i;
			}
			printf("\t%d",i);
		}
			i++;
	}
	printf("\nSo lon nhat chia het cho 2 va 3 ma nho hon %d la: %d",n,max);
	}
}
