#include<stdio.h>
#include<conio.h>
void nhiPhan(int n){
	if(n==0)
		return ;
	else{
		int r=n%2;
		printf("\nsodu1: %d",r);
		nhiPhan(n/2);
		printf("\n%d",r);
	}
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	nhiPhan(n);
	getch();
}
// abc
