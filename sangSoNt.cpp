#include<stdio.h>
#include<conio.h>

int prime[1000000];

void slive(){
	for(int i=0; i<1000000; i++){
		prime[i]=1;
// coi tat ca cac so la so nguyen to
	}
	prime[0]=prime[1]=0;
// so 1 so 2 khong la so nguyen to
	for(int i=2; i<1000; i++){
		if(prime[i]){
			for(int j=i*i; j<1000000;j+=i)
				prime[j]=0;
		vd i=2 thì j =4; ++ j=6,8,10,12... khong la so nguyen to vì nhan voi 2 loai
		
		}
	}
	
}

int main(){
	slive();
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		if(prime[i])
			printf("%d ",i);
	}
	getch();
}

