#include<stdio.h>
#include<conio.h>
#include<math.h>

struct phanso{
	int tuso;
	int mauso;
};

void rutGonPhanSo(phanso *ps){
	int a= ps->tuso;
	int b= ps->mauso;
	int UCLN=1;
	a=abs(a);
	b=abs(b);
	if(a==0 || b==0)
		a=a+b;
	else{
		while(a!=b){
			if(a>b)
				a=a-b;
			else 
				b=b-a;
		}
		UCLN=a;
	}
	ps->tuso /= a;
	ps->mauso /=b;
}

void nhapPhanSo(phanso *ps){
	printf("Nhap tu so: ");
	scanf("%d", &ps->tuso);
	do{
		printf("Nhap mau so: ");
		scanf("%d",&ps->mauso);
	}while(ps->mauso ==0);
	if( ps->mauso < 0){
		ps->tuso *= -1;
		ps->mauso *= -1;
	}
}

void inPhanSo(phanso ps){
	rutGonPhanSo(&ps);
	printf("%d/%d",ps.tuso, ps.mauso);	
}

phanso congPhanSo(phanso ps1, phanso ps2){
	// a/b+c/d=(ad+bc)/bd
	phanso ketQua;
	ketQua.tuso = ps1.tuso*ps2.mauso+ps1.mauso*ps2.tuso;
	ketQua.mauso= ps1.mauso*ps2.mauso;
	return ketQua;
}

phanso truPhanSo(phanso ps1, phanso ps2){
	// a/b-c/d=(ad-bc)/bd
	phanso ketQua;
	ketQua.tuso = ps1.tuso*ps2.mauso-ps1.mauso*ps2.tuso;
	ketQua.mauso= ps1.mauso*ps2.mauso;
	return ketQua;
}

phanso nhanPhanSo(phanso ps1, phanso ps2){
	// a/b*c/d=ac/bd
	phanso ketQua;
	ketQua.tuso = ps1.tuso*ps2.tuso;
	ketQua.mauso= ps1.mauso*ps2.mauso;
	return ketQua;
}

phanso chiaPhanSo(phanso ps1, phanso ps2){
	// a/b*c/d=ac/bd
	phanso ketQua;
	ketQua.tuso = ps1.tuso*ps2.mauso;
	ketQua.mauso= ps1.mauso*ps2.tuso;
	return ketQua;
}

int main(){
	phanso ps1, ps2;
	nhapPhanSo(&ps1);
	inPhanSo(ps1);
	printf("\n");
	nhapPhanSo(&ps2);
	inPhanSo(ps2);
	printf("\n");
	inPhanSo(ps1); printf(" + "); inPhanSo(ps2); printf("= ");inPhanSo(congPhanSo(ps1, ps2));
	printf("\n");
	inPhanSo(ps1); printf(" - "); inPhanSo(ps2); printf("= ");inPhanSo(truPhanSo(ps1, ps2));
	printf("\n");
	inPhanSo(ps1); printf(" . "); inPhanSo(ps2); printf("= ");inPhanSo(nhanPhanSo(ps1, ps2));
	printf("\n");
	inPhanSo(ps1); printf(" : "); inPhanSo(ps2); printf("= ");inPhanSo(chiaPhanSo(ps1, ps2));
	getch();
}
