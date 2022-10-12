#include <stdio.h>
#include <conio.h>

void swap(int &a, int &b){
	int c=a;
	a=b;
	b=c;
}

void sapXepMang(int a[], int n){
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
		}
	}
}

void printfMang(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
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
	sapXepMang(a, n);
	printfMang(a, n);
	getch();
}
