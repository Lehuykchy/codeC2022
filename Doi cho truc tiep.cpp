#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
	int n; cin>> n;
	int a[n];
	for(int &x: a) cin>>x;
	for(int i=0; i<n-1; i++){
		for(int j=i; j<n; j++){
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}
		cout<<"Buoc: "<< i+1<<" ";
		for(int y: a) cout<<y<<" ";
		cout<<endl;
	}
	getch();
}
