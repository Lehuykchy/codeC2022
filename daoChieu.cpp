#include<stdio.h>
#include<conio.h>
	int n, a[100];

void nhapMang(int a[],int &n){
	do{
		printf("Nhap so mang phan tu: ");
		scanf("%d",&n);
	}while(n<0 || n>100);
	for(int i=0; i<n; i++){
		printf("a[%d] :",i+1);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
		printf("\n");
}

void daoNguocMang(int a[], int n){
	for(int i=0; i<=n/2; i++){
		int tem= a[i];
		a[i]=a[ n-i-1];
		a[n-i-1]=tem;
	}
}
int main(){
//	int n, a[100];
	nhapMang(a, n);
	xuatMang(a, n);
	daoNguocMang(a,n);
	xuatMang(a,n);
	getch();
}
