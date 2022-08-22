#include <stdio.h>
#include <string.h>
void chuyenInHoa(char s1[])
{
	for(int i=0; i < strlen(s1) ; i++)
	{
		if(s1[i] >= 97 && s1[i] <= 122){
			s1[i] = s1[i] - 32;
		}
	}
}
int main(){
	char s1[100];
	printf("nhap vao chuoi : ");
	scanf("%s", s1);
	chuyenInHoa(s1);
	printf("chuoi sau khi in hoa la: %s ", s1);
}
