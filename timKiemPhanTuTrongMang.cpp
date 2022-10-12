#include<stdio.h>
#include<conio.h>

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

int timKiem(int a[], int n, int tk){
	int kq=-1;
	for(int i=0; i<n; i++){
		if(a[i]==tk)
			kq=i;
	}
	return kq;
}

void thucHien(int a[],int n){
	int kq;
	printf("Nhap so can tim: ");
	scanf("%d",&kq);
	if(timKiem(a, n, kq)==-1)
		printf("khong co trong mang a[].");
	else 
		printf("%d co trong mang a[] la phan tu a[%d]",kq, timKiem(a, n, kq)+1);
}

int main(){
	int a[100],n;
	nhapMang(a,n);
	xuatMang(a,n);
	thucHien(a, n);
	getch();
}
