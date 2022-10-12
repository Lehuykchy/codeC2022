#include <stdio.h>
#include <conio.h>
#include <math.h>

int thuanNghich(int n){
	int rev=0, n1=n;
	while(n!=0){
		rev= rev*10+n%10;
		n/=10;	
	}
	if(rev==n1)
		return 1;
	return 0;
}

int soChinhPhuong(int n){
	int a=sqrt(n);
	if(a*a==n)
		return 1;
	return 0;
	
}

int demSoChinhPhuong(int a, int b){
	int c1=sqrt(a), c2=sqrt(b);
	if(c1*c1!=a)
		++c1;
	return (c2-c1)+1;
	
}

int main(){
	int t;
	scanf("%d",&t);
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		if(thuanNghich(n))
//			printf("YES");
//		else printf("NO");
//	}

	// kiem tra so chinh phuong
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		if(soChinhPhuong(n))
//			printf("YES\n");
//		else printf("NO\n");		
//	}

	// so chinh phuong tren doan
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		int c1=sqrt(a), c2=sqrt(b);
		if(c1*c1!=a)
			++c1;
		for(int i=c1; i<=c2; i++){
			printf("%d ",i*i);
		}
		printf("\nso chinh phuong trong doan la: %d\n",demSoChinhPhuong(a,b));
	}

	getch();
}
