/*
	http://alireza.es/homework/ 
	Question: مقدار یک عبارت جبری خاص را محاسبه کند
*/
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	cout << ((pow(a,3))/((a*a)+a+1));
	 
	getch();
	return 0;
}