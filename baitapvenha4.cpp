#include <stdio.h>
int main(){
    int n,m;
    printf("Nhap so n=");
    scanf("%d",&n);
    int i=0;
    while(n>0){
        m=n%10;
        i=i*10+m;
        n=n/10;
	}printf("so dao nguoc la %d",i);
}

