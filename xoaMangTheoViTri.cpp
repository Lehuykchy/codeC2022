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
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);	
}

void xoaMangTaiViTri(int a[], int &n, int vt){
	// 1 2 3 4 5
	// 1 2 4 5
	for(int i= vt; i<n-1; i++){
		a[i]=a[i + 1];
	}
	n--;
}

void xoaMangCoDieuKien(int a[], int &n){
	int gt;
	printf("Nhap gia tri can xoa: ");
	scanf("%d",&gt);
	for(int i=0; i<n; i++){
		if(a[i]==gt) xoaMangTaiViTri(a, n, i);
	}
}

int main(){
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	xoaMangTaiViTri(a, n, 3);
	printf("\n%d\n",n);
	xuatMang(a,n);
	xoaMangCoDieuKien(a, n);
	xuatMang(a, n);
	getch();
}
