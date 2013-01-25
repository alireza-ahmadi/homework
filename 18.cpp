/*
	http://alireza.es/homework/ 
	Question: نام ماه را با گرفتن شماره آن چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m;
	cin >> m;
	switch(m){
		case 1:
			cout << "Farvardin";
			break;
		case 2:
			cout << "Ordibehesht";
			break;
		case 3:
			cout << "Khordad";
			break;
		case 4:
			cout << "Tir";
			break;
		case 5:
			cout << "Mordad";
			break;
		case 6:
			cout << "Shahrivar";
			break;
		default:
			cout << "Invalid";
	}
	 
	getch();
	return 0;
}

