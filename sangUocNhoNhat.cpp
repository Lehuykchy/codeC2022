#include <stdio.h>
#include <conio.h>

int prime[1000000];

void sang(){
	for(int i=1; i<1000000; i++){
		prime[i]=i;
	}
	for(int i=2; i<1000; i++)
		if(prime[i]){
			for(int j=i*i; j<1000000; j+=i)
				if(prime[j]==j){
					prime[j]=i;
				}

		}
}

int main(){
	sang();
	int n;
	scanf("%d",&n);
	printf("%d",prime[n]);
	getch();
}
