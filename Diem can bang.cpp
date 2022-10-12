#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,a[1000]; cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		int sum=0, left=0;
		bool ok=false;
		for(int i=0; i<n; i++) sum+=a[i];
		for(int i=0; i<n; i++){
			sum-=a[i];
			if(sum==left){
				cout<<i;
				ok=true;
			}else left+=a[i];	
		}
		if(!ok) cout<<"-1";
		else cout<<endl;
				
	}
	getch();
}
