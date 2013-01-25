/*
	http://alireza.es/homework/ 
	Question: عددی دریافت کرده ، اگر یکانش 5 یا 9 بود پیغام تایید چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m;
	cin >> m;
	m %= 10;
	switch(m){
		case 5:
			cout << "OK";
			break;
		case 9:
			cout << "OK";
			break;
		default:
			cout << "NO";
	}
	 
	getch();
	return 0;
}

