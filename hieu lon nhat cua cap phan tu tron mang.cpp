#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,a[1000]; cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		int min_value=a[0], res=-1e9;
		for(int i=1; i<n; i++){
			if(a[i]>min_value){
				res= max(res, a[i]-min_value);
			}
			min_value=min(min_value, a[i]);
		}
		if(res==-1e9) cout<<"-1"<<endl;
		else cout<<res<<endl;
	}
	getch();
}
