#include<stdio.h>
#include<conio.h>

void nhapMang(int a[], int &n){
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
		printf("\n");
}

void sapXepTangDan(int a[], int n){
	for(int i=0; i<n; i++)
		for(int j=i+1;j<n; j++){
			if(a[i]>a[j]){
				int tem=a[i];
				a[i]= a[j];
				a[j]=tem;	
		}
	}
}

void gopMang(int a[], int n1, int b[], int n2, int c[], int &n3){
	n3=n2+n1;
	int i1=0;
	int i2=0;
	int i3=0;
	while(i3<n3){
		if(i1<n1){
			c[i3]=a[i1];
			i1++;
		}else{
			c[i3]=b[i2];
			i2++;
		}
		i3++;
	}
	
}

int main(){
	int a[100],n1,b[100],n2,c[100],n3;
	nhapMang(a, n1);
	xuatMang(a, n1);
	sapXepTangDan(a,n1);
	printf("=> sapXep: ");
	xuatMang(a, n1);
	nhapMang(b, n2);
	xuatMang(b, n2);
	sapXepTangDan(b, n2);
	printf("=> sapXep: ");
	xuatMang(b,n2);
	gopMang(a, n1, b, n2, c, n3);
	printf("\nMang c[]: ");
	xuatMang(c, n3);
	sapXepTangDan(c, n3);
	printf("=> sapXep: ");
	xuatMang(c, n3);
	getch();
	
}
