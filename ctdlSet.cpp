#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
//size
//insert
//count tim phan tu
//find 
//erase xoa phan tu 
//multiset<int> cac phan tu co the giong nhau
// cho mang con co n phan tu va so nguyen k, doi voi moi day con lien tiep co chieu k
// in ra phan tu lon nhat trong day con do


int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int &x: a ) cin>>x;
	multiset<int> ms;
	for(int i=0; i<k; i++){
		ms.insert(a[i]);
	}
	for(int i=k; i<n; i++){
		cout<<*ms.rbegin()<< " ";
		ms.erase(ms.find(a[i-k]));
		ms.insert(a[i]);
	}
	cout<<*ms.rbegin()<<endl;
	getch();
}

