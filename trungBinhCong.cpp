#include<stdio.h>
#include<conio.h>
float trungBinhCong(int a[], int n){
	float tong=0;
	for(int i=0; i<n; i++){
		tong+=a[i];
	}
	return tong/n;
	
}
int main(){
	int n,a[100];
	do{
		printf("Nhap so luong phan tu mang: ");
		scanf("%d",&n);
	}while(n<0||n>100);
	for(int i=0; i<n; i++){
		printf("a[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Trung binh cong cua mang: %.2f", trungBinhCong(a, n));
	getch();
	
}
