#include"stdio.h"
#include<conio.h>
int main(){
	char str[100];
	int i=0,d=0;
	printf("nhap xau ky tu: ");
	fgets(str,100,stdin);
	while(str[i] != '\0'){
		if(str[i]=='*') 	d++;
		i++;
	}
	printf("so ky tu * la : %d ",d);
	getch();
}
