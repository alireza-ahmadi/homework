/*
	http://alireza.es/homework/ 
	Question: 3 عدد را خوانده به ترتیب نزولی چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x,y,z,m;
	cin >> x >> y >> z;
	if(x<y){
		m = x;
		x = y;
		y = m;
	}
	if(y<z){
		m = y;
		y = z;
		z = m;
	}
	if(x<y){
		m = x;
		x = y;
		y = m;
	}
	cout << x << y << z;
	 
	getch();
	return 0;
}

