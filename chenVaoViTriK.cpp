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
	int a[100],n;
	nhapMang(a, n);
	xuatMang(a, n);
	chenVaoCuoiMang(a, n, 99);
	printf("\n");
	xuatMang(a,n);
	chenVaoDauMang(a,n,98);
	printf("\n");
	xuatMang(a, n);
	chenVaoViTriK(a, n, 10);
	xuatMang(a,n);
	getch();
}
