#include<stdio.h>
#include<conio.h>
int main(){
	int A[100],n;
	do{
		printf("Nhap so phan tu mang: ");
		scanf("%d",&n);
	}while(n>100||n<0);
	for(int i=0; i<n; i++){
		printf("A[%d]= ",i+1);
		scanf("%d",&A[i]);
	}
}
