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
}

int kiemTraMangCon(int a[], int n1, int b[], int n2){
	int kq=0;int j, k=0;
	if(n2<=n1){
		for(int i=0; i<n1; i++)
				for(j=0; j<n2;j++){
					if(a[j]==a[i]) k++;
			}
		if(k=n2) kq=1;
	}
	return kq;
		
}

int main(){
	int a[100],b[100],n1,n2;
	int kq;
	nhapMang(a, n1);
	xuatMang(a, n1);
	printf("\n");
	nhapMang(b, n2);
	xuatMang(b, n2);
	printf("\n");
	kq= kiemTraMangCon(a, n1, b, n2);
	if(kq) printf("La mang con!");
	else printf("Khong la mang con!");
	getch();
}
