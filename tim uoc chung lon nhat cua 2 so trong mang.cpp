#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int gcd(int a, int b){
	if(b==0) return a;
	return(b, a%b);
}

map<int , int> mp;
void slove(int n){
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0){
			mp[i]++;
			if(i!=n/i) mp[n/i]++;
		}
	}
}

int main(){
// cach 1
	int t; cin>>t;
	while(t--){
		int n,a[1000]; cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		int res=1;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				res=max(res, gcd(a[i],a[j]));
			}
		}
		cout<<res<<endl;
	}
// cach 2
//	int t; cin>>t;
//	while(t--){
//		int n,a[1000]; cin>>n;
//		for(int i=0; i<n; i++){
//			cin>>a[i];
//			slove(a[i]);
//		}
//		int res=1;
//		for(auto x: mp){
//			if(x.second>=2)
//				res=x.first;
//		}
//		cout<<res<<endl;
//	}
//	

	getch();
}
