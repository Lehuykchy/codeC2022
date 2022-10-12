#include<bits/stdc++.h>
#include<conio.h>
using namespace std;



int main(){
	int t; cin>>t;
	while(t--){
		map<int, int> mp;
		int n, a[1000]; cin>>n;
		for(int i=0; i<n; i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		for(auto x: mp){
			if(x.second %2!=0)
				cout<<x.first <<endl;
		}
	}
	getch();
}
