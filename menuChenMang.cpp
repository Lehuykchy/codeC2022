#include<stdio.h>
#include<conio.h>

void nhapMang(int a[], int &n){
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[], int n){
	printf("\n");
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);	
}

void chenVaoCuoiMang (int a[], int &n, int gtchen){
	int size= sizeof(a)/sizeof(a[0]);
	if(n==size)
		printf("Khong th chen them!");
	a[n]=gtchen;
	n++;
}

void chenVaoDauMang(int a[], int &n, int gtchen){
	int size= sizeof(a)/sizeof(a[0]);
	if(n==size)
		printf("Khong th chen them!");
	for(int i=n; i>0; i--)
		a[i]=a[i-1];
	a[0]=gtchen;
	n++;
	
}

int chenVaoViTriK(int a[],int &n, int gtchen){
	int size= sizeof(a)/sizeof(a[0]);
	if(n==size)
		printf("Khong th chen them!");
	int k;
	printf("\nNhap vi tri k: ");
	scanf("%d",&k);
	for(int i=n; i>k; i--)
		a[i]=a[i-1];
	a[k]=gtchen;
	n++;
}

int main(){
	int gt,a[100],n;
	do{
		printf("\nMenu (Ham muon chon)\n");
		printf("1- nhap mang\n");
		printf("2- xuat mang\n");
		printf("3- chen vao dau mang\n");
		printf("4- chen vao cuoi mang\n");
		printf("5- chen vao vi tri K\n");
		printf("0- exit\n");
		printf("Lua chon: ");
		scanf("%d",&gt);
		if(gt==1)
			nhapMang(a, n);
		else if(gt==2)
			xuatMang(a, n);
		else if(gt==3 || gt ==4 || gt==5){
			int gtchen;
			printf("Nhap gia tri chen: ");
			scanf("%d",&gtchen);
			if(gt==3)
				chenVaoDauMang(a, n, gtchen);
			else if(gt==4)
				chenVaoCuoiMang(a, n, gtchen);
			else chenVaoViTriK(a, n, gtchen);
		}
	}while(gt != 0);
	getch();
}
