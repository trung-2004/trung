#include <stdio.h>
int timUCLN(int a, int b)
{
	int c=a*b;
	    	while(a!=b){
			 if(a>b)
			   	a=a-b;
			  else
			   	b=b-a;
		    }
		    return a;
}
int main(){
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	if(a>=0 && b>=0 ){
		if(a==0 && b==0)
			printf("khong ton tai UCLN, BCNN\n");
		else if(a==0 || b==0){
			printf("khong co BCNN, UCLN = %d\n",(a==0)?b:a);
		}else{
		int s = timUCLN(a, b);
		printf("UCLN cua hai so la: %d",s);
		}
	}
}
