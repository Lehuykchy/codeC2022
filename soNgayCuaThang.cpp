#include <stdio.h>
#include <conio.h>
int soNgayCuaThang(int thang, int nam){
	switch(thang){
	
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return (nam%400==0 || (nam%4==0 && nam%100!=0))?29:28;
	}	
}
int ngayTrongNam(int ngay, int thang, int nam){
	int ntn=0;
	for(int i=1;i<thang;i++){
		ntn+=soNgayCuaThang(i,nam);
	}
	ntn+=ngay;
	return ntn;
}
void ngayTruoc(int ngay, int thang, int nam){
	if(ngay==1){
		if(thang==1){
			ngay=31;
			thang=12;
			nam--;
		}else{
			thang--;
			ngay==soNgayCuaThang(thang,nam);
		}
	}else ngay--;
	printf("\nngay truoc do: %d %d %d ",ngay,thang,nam);
}
int main(){
	int ngay,thang,nam;
	do{
	printf("ngay/thang/nam: ");
	scanf("%d %d %d", &ngay, &thang, &nam);
	}while(ngay<1 || ngay>31 || thang <1 || thang>12 || nam<1 );
	// so ngay trong thang
	printf("so ngay trong thang %d: %d",thang,soNgayCuaThang(thang,nam));
	// so ngay trong nam
	printf("\nso ngay trong nam: %d",ngayTrongNam(ngay, thang, nam));
	// ngay truoc do
	ngayTruoc(ngay,thang,nam);
	getch();
	
	
}
