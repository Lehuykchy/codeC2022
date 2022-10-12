#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int a[1000001];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		memset(a, 0, sizeof(a));
		for(int i=0; i<n; i++){
			int x; cin>>x;
			if(x>0)   a[x]=1;
		}
		for(int i=1; i<1000001; i++){
			if(a[i]==0){
				cout<< i << endl;
				break;
			}	
		}
	}
	getch();
}
