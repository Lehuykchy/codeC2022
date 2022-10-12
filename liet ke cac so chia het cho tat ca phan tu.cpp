#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

map<int, int> mp;

void slove(int n){
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0){
			mp[i]++;
			if(i!=n/i) mp[n/i]++;
		}
	}
}

int main(){
	int t; cin>>t; 
	while(t--){
		int n, a[1000];
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>a[i];
			slove(a[i]);
		}
		int cnt=0;
		for(auto x: mp){
			if(x.second==n) cnt++;
		}
		cout<<cnt<<endl;
	}
	getch();
}

