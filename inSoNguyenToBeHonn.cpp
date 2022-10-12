#include <stdio.h>
#include <conio.h>
int kiemTra( int x){
	for(int i=2; i<=x-1;i++){
		if(x%i==0)
		return 0;
	}
	return 1;
}
int main(){
	int n;
	int i,j;
	do{
		printf("n: ");
		scanf("%d",&n);
	}while(n<=1);
	printf("Cac so nguy to la: ");
	for(i=2; i<=n; i++){
		if(kiemTra(i)==1)
		printf("%d ",i);
	}
	getch();
}
