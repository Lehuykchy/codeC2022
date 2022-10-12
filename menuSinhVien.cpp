#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>

struct date{
	int ngay;
	int thang;
	int nam;
};


struct sinhVien{
	int mssv;
	char ten[50];
	char gioiTinh[10];
	date ngaySinh;
	int tuoi;
	float diemMon1;
	float diemMon2;
	float diemMon3;
	float diemTrungBinh;
	char hocLuc[10];
	char maLop[20];	
};

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n')
		x[len-1]='\0';
}

void nhapSinhVien(sinhVien &SV){
	printf("MSSV: ");
	scanf("%d",&SV.mssv);
	printf("Ho va ten: ");
	fflush(stdin); fgets(SV.ten, sizeof(SV.ten), stdin); xoaXuongDong(SV.ten );
	printf("Gioi Tinh: ");
	fflush(stdin); fgets(SV.gioiTinh ,sizeof(SV.gioiTinh ), stdin); xoaXuongDong(SV.gioiTinh);
	printf("Ngay sinh: ");
	scanf("%d %d %d", &SV.ngaySinh.ngay, &SV.ngaySinh.thang, &SV.ngaySinh.nam);
	printf("Diem mon 1: ");
	scanf("%f",&SV.diemMon1);
	printf("Diem mon 2: ");
	scanf("%f",&SV.diemMon2);
	printf("Diem mon 3: ");
	scanf("%f",&SV.diemMon3);
	printf("Ma Lop: ");
	fflush(stdin); fgets(SV.maLop, sizeof(SV.maLop), stdin); xoaXuongDong(SV.maLop);
}

void tinhTuoi(sinhVien &sv){
	// lay thoi gian thuc
    time_t t = time(0);
    struct tm *Now = localtime(&t);

   //tinh tuoi
    sv.tuoi = Now ->tm_year + 1900 - sv.ngaySinh.nam;
}

void diemTrungBinh(sinhVien &sv){
	sv.diemTrungBinh= (sv.diemMon1+sv.diemMon2+sv.diemMon3)/3;
}

void xepLoai(sinhVien &sv ){
	if(sv.diemTrungBinh<4)
		strcpy(sv.hocLuc, "Yeu");
	else if(sv.diemTrungBinh<6.5)
		strcpy(sv.hocLuc ,"Trung binh");
	else if(sv.diemTrungBinh<8)
		strcpy(sv.hocLuc ,"Kha");
	else strcpy(sv.hocLuc ,"Gioi");
}

void capNhatSinhVien(sinhVien &sv){
	nhapSinhVien(sv);
	tinhTuoi(sv);
	diemTrungBinh(sv);
	xepLoai(sv);
}

void inSinhVien(sinhVien sv){
	printf("%d \t %20s \t %15s\t%d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t  %6.2f \t %10s \t %10s", sv.mssv, sv.ten, sv.gioiTinh, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}

void nhapDanhSach(sinhVien ds[], int &n){
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("Sinh vien %d:",i+1);
		printf("\n");
		capNhatSinhVien(ds[i]);
	}
}

void xuatDanhSach(sinhVien ds[], int n){
	printf("%8s \t %20s \t %15s\t%10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %10s \t %10s", "MSSV", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	printf("\n");
	for(int i=0; i<n; i++){
		inSinhVien(ds[i]);
		printf("\n");
	}
}

float timMaxDiemTB(sinhVien ds[], int n){
	float max=ds[0].diemTrungBinh;
	for(int i=0; i<n-1; i++){
		if (ds[i+1].diemTrungBinh > ds[i].diemTrungBinh)
			max=ds[i+1].diemTrungBinh ;
	}
	return max;	
}

int main(){
	sinhVien sv1;
	sinhVien ds[100]; 
	int n;
//	capNhatSinhVien(sv1);
//	printf("%8s \t %20s \t %15s\t%10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %10s \t %10s", "MSSV", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
//	printf("\n");
//	inSinhVien(sv1); 
	printf("\n");
	printf("\n");
	nhapDanhSach(ds, n);
	xuatDanhSach(ds, n);
	printf("Diem Tung Binh lon nhat: %f",timMaxDiemTB(ds, n));
	getch();
}
