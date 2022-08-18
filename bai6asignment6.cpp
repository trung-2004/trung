#include <stdio.h>
int main(){
	int n;
	do
	{
		printf("nhap n > 0: ");
		scanf("%d",&n);
	}while(n <= 0);
	int a[n];
	for(int i=0 ; i<n ;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	int tm=0, kl=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] > 0){
			tm++;
			if(kl < tm)
			{
				kl = tm;
			}
		}else{
			tm = 0;
		}
	}
	printf("so luong so duong lien tiep nhieu nhat: %d\n",kl);
	return 0;
}
