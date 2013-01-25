/*
	http://alireza.es/homework/ 
	Question: جذر و قدر مطلق عددی را چاپ کند
*/
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main(){
	float a;
	cin >> a;
	cout << abs(a) << endl << sqrt(abs(a));
	 
	getch();
	return 0;
}