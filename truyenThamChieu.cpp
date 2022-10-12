#include<stdio.h>
#include<conio.h>
// truyen tham tri
void swap_1(int a, int b){
	int temp=a;
		a = b;
		b= temp;
}
// truyen tham chieu
void swap_2(int &a, int &b){
	int temp=a;
		a = b;
		b= temp;
}
// con tro
void swap_3(int *a, int *b){
	int temp=*a;
		*a = *b;
		*b= temp;
}
int main(){
	int a=5,b=10;
	printf(" \ntruoc khi swap_1 a= %d, b=%d",a,b);
	swap_1(a,b);
	printf(" \nsau khi swap_1 a= %d, b=%d",a,b);
	
	
	printf(" \ntruoc khi swap_2 a= %d, b=%d",a,b);
	swap_2(a,b);
	printf(" \nsau khi swap_2 a= %d, b=%d",a,b);
	
	
	printf(" \ntruoc khi swap_3 a= %d, b=%d",a,b);
	swap_3(&a,&b);
	printf(" \nsau khi swap_3 a= %d, b=%d",a,b);
	
	
	getch();
}
