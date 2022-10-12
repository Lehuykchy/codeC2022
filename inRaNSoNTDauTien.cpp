#include <stdio.h>
#include <conio.h>

int prime[1000000];

void slive(){
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

int main(){
	slive();
	int i=0, cnt=0;
	int n;
	scanf("%d",&n);
	while(cnt<n){
		if(prime[i]){
			printf("%d\n",i);
		cnt++;
		}
		i++;
	}
	getch();
}

