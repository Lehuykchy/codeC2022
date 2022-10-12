#include<stdio.h>
#include<conio.h>
int F(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	printf(" \n%d  \nF(%d): ",n,n);
	return F(n-1)+F(n-2);
}

int main(){
	int n;
	do{
		printf("\nNhap so nguyen n: ");
		scanf("%d",&n);
	}while(n<0);
	printf("\ntong so nguyen cua day : %d",F(n));
	getch();
}
