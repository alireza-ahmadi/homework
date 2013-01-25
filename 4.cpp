/*
	http://alireza.es/homework/ 
	Question: مقدار دو متغیر را عوض کرده و چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x,y,m;
	cin >> x >> y;
	m = x;
	x = y;
	y = m;
	cout << x << endl << y;
	 
	getch();
	return 0;
}