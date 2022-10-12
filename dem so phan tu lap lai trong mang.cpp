#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		map<int, int> mp;
		int n,a[1000]; cin>>n;
		for(int i=0; i<n; i++){
			cin>> a[i];
			mp[a[i]]++;
			cout<<mp[a[i]];
		}
		int ans=0;
		for(int i=0; i<n; i++){
			if(mp[a[i]]>=2)++ans;
		}
		cout<<ans<<endl;
		
	}
	getch();
}
