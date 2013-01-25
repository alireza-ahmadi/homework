/*
	http://alireza.es/homework/ 
	Question: 10 عدد از ورودی خوانده، میانگین آن ها را چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int s=0,n;
	for(int i=0;i<10;i++){
		cin >> n;
		s = s+n;
	}
	cout << s/10;
	 
	getch();
	return 0;
}

