#include<stdio.h>
#include<conio.h>
#include<math.h>

int soHoanHao(int n){
	long long x=n,rev=0;
	for(long long int i=1; i<=n/2; i++){
		if(n%i==0)
			rev+=i;		
	}
	if(x==rev)
		return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long  n;
		scanf("%lld",&n);
		if(soHoanHao(n))
			printf("YES");
		else printf("NO");
	}
	getch();
}
