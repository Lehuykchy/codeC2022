#include <stdio.h>
#include <conio.h>
int kiemTra( int x){
	if(x<=1) 
		return 0;
	for(int i=2; i<=x-1;i++){
		if(x%i==0)
		return 0;
	}
	return 1;
}
int main(){
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	if(kiemTra(n)==0)
		printf("%d khong la so nguyen to !",n);
	else 
		printf("%d la so nguyen to !",n);
	getch();
}
