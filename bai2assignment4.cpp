#include <stdio.h>
int main(){
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	if(a>=0 && b>=0 ){
		if(a==0 && b==0)
			printf("khong ton tai UCLN, BCNN\n");
		else if(a==0 || b==0)
			printf("khong co BCNN, UCLN = %d\n",(a==0)?b:a);
		else{
		int c=a*b;
	    	while(a!=b){
			 if(a>b)
			   	a=a-b;
			  else
			   	b=b-a;
		    }
		printf("UCLN la %d\n",a);
		printf("BCNN la %d\n",c/a);
		}
	}else
	printf("nhap lai a,b >0:");
}
