#include<stdio.h>
#include<conio.h>
#define True 1
#define False 0
int main(){
	int a,b,c;
	char kiemDinh=True;
	printf("\n a: "); scanf("%d",&a);
	printf("\n b: "); scanf("%d",&b);
	printf("\n c: "); scanf("%d",&c);
	if((a+b)>c && (a+c)>b && (b+c)>a){
		if(a==b && b==c){
			kiemDinh= True;
			printf(" Tam giac deu");}
		else {if(a==b||b==c||c==a){
			kiemDinh=True;
			printf("la tam giac can");}
		}
		if(a*a==b*b+c*c|| b*b==a*a+c*c|| c*c==a*a+b*b){
			kiemDinh=True;
			printf("la tam giac vuong");}
		if(kiemDinh==False)
			printf("tam giac thuong");		
	}
	else
		printf("khong la tam giac");
	getch();
	return 0;
	
}
