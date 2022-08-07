#include <stdio.h>
int main(){
	int day,mon,d,n;
	printf("nhap day=");
	scanf("%d",&day);
	printf("nhap mon=");
	scanf("%d",&mon);
	if(mon>0 && day>0 && day<32 && mon==1){
		d=day;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
		else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
    }else
	if(day>0 && day<29 && mon==2){
		d=day+31;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
		else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
	if(day>0 && day<32 && mon==3){
		d=day+59;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
		else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
	if(day>0 && day<31 && mon==4){
		d=day+90;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
		else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
	if(day>0 && day<32 && mon==5){
		d=day+120;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
		else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
	if(day>0 && day<31 && mon==6){
		d=day+151;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
	    else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
	if(day>0 && day<32 && mon==7){
		d=day+181;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
		else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
	if(day>0 && day<32 && mon==8){
		d=day+212;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
	    else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
	if(day>0 && day<31 && mon==9){
		d=day+243;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
		else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
	if(day>0 && day<32 && mon==10){
		d=day+273;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
		else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
	if(day>0 && day<31 && mon==11){
		d=day+304;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
		}
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
		else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
	if(day>0 && day<32 && mon==12){
		d=day+334;
		switch(d%7){
		case 1:n=2;break;
		case 2:n=3;break;
		case 3:n=4;break;
		case 4:n=5;break;
		case 5:n=6;break;
		case 6:n=7;break;
		case 0:n=1;break;
	    }
		if(n==1)
			printf("la ngay thu %d trong nam, la chu nhat",d);
		else
			printf("la ngay thu %d trong nam, la thu %d trong tuan",d,n);
	}else
		printf("nhap so ngay thang khong phu hop");
}
