#include <stdio.h>
#include <conio.h>
#include <math.h>

int U(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)
			return i;
	}
	return n;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",U(n));
	getch();
}
