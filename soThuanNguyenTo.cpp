#include <stdio.h>
#include <conio.h>

int prime[1000000];

void sang(){
	for(int i=0; i<1000000; i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2; i<1000; i++){
		if(prime[i]){
			for(int j=i*i; j<1000000; j+=i){
				prime[j]=0;
			}
		}
	}
}

int csnt(int n){
	while(n){
	int r=n%10;
	if(r!=2 && r!= 3 && r!=5 && r!=7){
		return 0;
		}
		n/=10;
	}
	return 1;
}

int tongnt(int n){
	sang();
	int sum=0;
	while (n){
		sum+=n%10;
		n/=10;		
	}
	return prime[sum];
}

int main(){
	sang();
	int n;
	scanf("%d",&n);
	while(n--){
		int cnt=0;
		printf("----------------------\n");
		int a,b;
		scanf("%d %d",&a,&b);
		for(int i=a; i<=b; i++){
			if(csnt(i)  && prime[i] && tongnt(i)){
				cnt++;
			}
		}
			printf("%d\n",cnt);
	}
//	while(n--){
//		int a,b;
//		scanf("%d %d", &a, &b);
//		for(int i=a; i<=b; i++){
//			if(prime[i] && csnt(i)) printf("%d ",i);
//		}
//	}
	getch();
}
