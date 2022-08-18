#include <stdio.h>
#include <conio.h>
void kiemtra(int a[], int i)
{
    int j;
    for (j=0;j<i;j++)
    {
        while (a[i]==a[j])
        {
            printf ("Nhap lai gia tri a[%d] = ",i);
			scanf ("%d",&a[i]);
            kiemtra(a, i);             
        }
    }
}
main(){
	
    int j, n, i, a[n];
    do
    {
    	printf ("Nhap vao so phan tu cua mang ");
		scanf ("%d",&n);
	}while(n <= 0);
    
    for (i=0;i<n;i++)
    {
        printf ("a[%d]= ",i);
		scanf ("%d",&a[i]);
        kiemtra(a, i); 
    }
    printf("Mang ban vua nhap la : \n");
    for (i=0;i<n;i++)
    {
        printf ("%d  ",a[i]);
    }
    return 0;
}
