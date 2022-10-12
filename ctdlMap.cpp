#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

// map<int, int> mp;
//(key,value)

int main(){
	map<int, int> mp;
	mp[100]=100; // (100;200)
	mp[200]=300; 
	mp.insert({400,500});
	mp[100]=600;
	for(pair<int, int> x: mp){
		cout<< x.first<<" " << x.second<<endl;
		
	}
	getch();
}
