#include<stdio.h>
#include<conio.h>
int main(){
	int c=9,*pc;
	pc=&c;
	printf("%d",*pc);
	printf("\n%p  %p",pc, &c);
	getch();
}
