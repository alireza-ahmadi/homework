/*
	http://alireza.es/homework/ 
	Question: دو عدد از ورودی دریافت کرده، مجموع 2 عدد را به تابع اصلی ارجاع دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int sum(int a,int b){
	return a+b;
}
int main(){
	int x,y;
	cin >> x >> y;
	cout << sum(x,y);
	
	getch();
	return 0;
}