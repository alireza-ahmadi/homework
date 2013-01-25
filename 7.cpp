/*
	http://alireza.es/homework/ 
	Question: قیمت خرید، فروش و تعداد را دریافت و سود را محاسبه کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int b,s,n;
	cout << "Gheymat kharid\nGheymat foroosh\ntedad\nra be tartib vared konid.\n";
	cin >> b >> s >> n;
	cout << n*(s-b);
	 
	getch();
	return 0;
}