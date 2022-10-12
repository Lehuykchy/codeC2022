#include <iostream>
#include <iomanip>
#include<conio.h>

using namespace std;

int main(){
	int r;
	cin >> r;
	float chuVi = 3.14 * 2 * r;
	float dienTich = 3.14 * r * r;
	cout<< fixed << setprecision(2) << chuVi << " " << dienTich << endl;
	getch();
}
