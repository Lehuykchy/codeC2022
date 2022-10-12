#include<stdio.h>
#include<conio.h>
void thapHaNoi(int n, char a, char b, char c){
	if(n==1)
		printf("\nchuyen dia thu %d tu cot %c sang cot %c",n,a,c);
	else{
		thapHaNoi(n-1,a,c,b);
		printf("\nchuyen dia thu %d tu cot %c sang cot %c",n,a,c);
		thapHaNoi(n-1,b,a,c);
	}
}
int main(){
	char a='A', b='B', c='C';
	int n;
	scanf("%d",&n);
	thapHaNoi(n,a,b,c);
	getch();
}
