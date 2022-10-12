#include<stdio.h>
#include<conio.h>
int giaiThua(int n){
	if(n==0|| n==1)
		return 1;
	else
		printf("%d \n",n);
		return n*giaiThua(n-1);
	
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Giai thua cua %d la: %d",n,giaiThua(n));
	getch();
}
