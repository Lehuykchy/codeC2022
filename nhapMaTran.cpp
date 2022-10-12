#include<stdio.h>
#include<conio.h>
int main(){
	int A[100][100],n,m;
	do{
		printf("Nhap so cot: ");
		scanf("%d",&n);
		printf("Nhap so hang: ");
		scanf("%d",&m);
	}while((n>100||n<0)&&(m>100||n<0));
	for(int i=0; i<m; i++)
		for(int j=0;j<n; j++){
			printf("A[%d][%d]",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	for(int i=0; i<m; i++){
		for(int j=0;j<n; j++)
			printf("%d ",A[i][j]);
			printf("\n");
	}
	getch();
}
