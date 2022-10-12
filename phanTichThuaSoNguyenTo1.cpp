#include<stdio.h>
#include<conio.h>
#include<math.h>
void pt1(int n){
	for(int i=2; i<=sqrt(n); i++){
		while(n%i==0){
			printf("%d ",i);
			n/=i;
		}
	}
	if(n!=1){
		printf("%d ",n);
	}
}

void pt2(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			int cnt=0;
			while(n%i==0){
			cnt++;
			n/=i;
			}
		printf("%d(%d) ",i,cnt);
		}
	}
	if(n!=1){
		printf("%d(1)",n);	
	}
}

int main(){
	int n;
	scanf("%d",&n);
	pt1(n);
	printf("\n");
	pt2(n);
	getch();
}
