/*
	http://alireza.es/homework/ 
	Question: طول اضلاع مثلث را خوانده، اگر قائم الزاویه است پیغام دهد
*/
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main(){
	int x,y,z;
	cin >> x >> y >> z;
	if(
		(pow(x,2)+pow(y,2))==pow(z,2) || 
		(pow(z,2)+pow(y,2))==pow(x,2) ||
		(pow(x,2)+pow(z,2))==pow(y,2)
	){
		cout << "yes";
	}
	 
	getch();
	return 0;
}

