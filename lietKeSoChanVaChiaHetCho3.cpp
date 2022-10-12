#include<stdio.h>
#include<conio.h>
void kiemTra(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[i]%2==0 && a[i]%3==0)
			printf("%d ",a[i]);
	}	
}

int kiemTraSoNguyenTo( int x){
	if(x<=1)
		return 0;
	for(int i=2; i<=(x/2); i++){
		if(x%i==0)
			return 0;
	}
	return 1;
}
	
int main(){
	int n,a[100];
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
	}while(n<0||n>100);
	for(int i=0; i<n; i++){
		printf("a[%d]: ",i+1);
		scanf("%d", &a[i]);
	}
	printf("Cac so chan va chia het cho 3: ");
	kiemTra(a, n);
	printf("\nCac so nguyen to la: ");
	for(int i=0; i<n; i++){
		if(kiemTraSoNguyenTo(a[i]))
			printf("%d ",a[i]);
	}
	getch();
}
