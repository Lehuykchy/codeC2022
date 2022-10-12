#include<stdio.h>
#include<conio.h>

void hinh1(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("*");
		}
		printf("\n");
	}
}

void hinh2(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1 || i==n || j==1 || j==n ){
				printf("*");
			}
			else printf("-");
		}
		printf("\n");
	}
	
}

void tamgiac1(int n){
	for(int i=1; i<=n;i++){
		for(int j=1; j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	hinh1(n);
	printf("------------\n");
	hinh2(n);
	printf("------------\n");
	tamgiac1(n);	
	getch();
}
