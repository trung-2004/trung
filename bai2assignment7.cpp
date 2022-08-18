#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int n;
	do
	{
	printf("nhap n > 0: ");
	scanf("%d", &n);
	}while(n<=0);
	
	int a[n];
	for(int i=0; i<n ;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	int x;
	printf("nhap x =  ");
	scanf("%d", &x);
	
	double kcgn = (fabs)(a[0] - x);
    int j = 0;
    for(int i = 0 ; i < n ; i++)
    {
       if((fabs)(a[i]-x) < kcgn)
       {
          kcgn = (fabs)(a[i] - x);
          j = i;
       }
    }
    printf("gia tri gan %d nhat la :",x);
    for(j ; j < n ; j++)
    {
       if((fabs)(a[j] - x) == kcgn)
       {
          printf("%d ",a[j]);
       }
    }
    return 0;
}
