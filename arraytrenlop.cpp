#include <stdio.h>
int main(){
	int ary[10];
	int i, max,max1;
	printf("nhap \n ");
	for(i=0;i<10;i++)
	{
		scanf("%d", &ary[i]);
	}
	max = ary[0];
	for(i=1;i<10;i++)
	{
		if(ary[i] > max)
		max = ary[i];
	}
	 for (i=1;i<10;i++)
	 {
	 	 if (max==ary[i]){
            continue;
            }else 
            if (max1<ary[i])
                max1=ary[i];
	 }
	printf("so gan lon nhat la so: %d",max1);
	return 0;
}
	
