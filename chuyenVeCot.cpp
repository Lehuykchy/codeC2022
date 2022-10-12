#include<stdio.h>
#include<conio.h>
int main(){
	char str[100];
	int i=0,d=0;
	printf("nhap xau ky tu: ");
	fgets(str,100,stdin);
	while(str[i]!='\0'){
		if(str[i] != 32 && str[i+1]==32) 
			printf("%c\n",str[i]);
	    else  if(str[i] != 32) 
			printf("%c",str[i]);
		i++;		
	}
	getch();
}
