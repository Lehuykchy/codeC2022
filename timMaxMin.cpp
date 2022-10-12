#include <stdio.h>
#include <conio.h>

int max(int a[], int n){
	int MAX=a[0];
	for(int i=1; i<n; i++)
		if(MAX < a[i]){
			MAX= a[i];		
	}
	return MAX;
}

int min(int a[], int n){
	int MIN=a[0];
	for(int i=1; i<n; i++)
		if(MIN > a[i]){
			MIN = a[i];		
	}
	return MIN;
}

int main(){
	int n, a[100];
	do{
		printf("Nhap so phan tu mang: ");
		scanf("%d",&n);
	}while(n< 0 || n> 100);
	for(int i=0; i<n; i++){
		printf("a[%d] :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Gia tri lon nhat trong mang la: %d",max(a, n));
	printf("\nGia tri nho nhat trong mang la: %d",min(a, n));
	getch();
}
