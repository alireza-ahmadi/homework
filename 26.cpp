/*
	http://alireza.es/homework/ 
	Question: عددی 3 رقمی بخواند، اگر رقم سمت راست با رقم سمت چپ برابر بود پیغام تایید بدهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int a,m,p;
	cin >> a;
	m = a%10;
	p = a/100;
	if(m == p){
		cout << "yes";
	}
	 
	getch();
	return 0;
}

