#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

// linear search O(n) thuat toan tim kiem tuyen tinh

bool ls(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x)
			return true;
	}
	return false;
}

// binary search O(logn) Thuat toan tim kiem nhi phan

bool bs(int a[], int n, int x){
	int l=0, r=n-1, mid;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]==x){
			return true;
		}else{
			// neu a[mid] be hon x thi x o phia ben phai => l=mid+1
			if(a[mid]<x) l=mid+1;
			// nguoc lai x nam ben trai r=mid-1
			else r=mid-1;
		}
	}
	return false;
}
// su dung de quy
bool bs1(int a[0], int l, int r, int x){
	if(l>r) return false;
	int mid=(l+r)/2;
	if(a[mid]==x) return true;
	else
		if(a[mid]>x) return(a, l, mid-1, x);
		else return(a, mid+1, r, x);
	
}
int main(){
	int n, x; cin>>n>>x;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
//	if(ls(a, n, x)) cout<<"found!"<<endl;
//	else cout<<"not found!"<<endl;
//	if(bs(a, n, x)) cout<<"found!"<<endl;
//	else cout<<"not found!"<<endl;
	if(bs1(a, 0, n-1, x))  cout<<"found!"<<endl;
	else cout<<"not found!"<<endl;
	getch();
}
