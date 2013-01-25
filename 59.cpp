/*
	http://alireza.es/homework/ 
	Question: دو آرایه 10 تایی بخواند و اصل جمع نظیر به نظیر را چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i;
	int m[10],k[10];
	for(i=0;i<10;i++){
		cin >> m[i];
	}
	for(i=0;i<10;i++){
		cin >> k[i];
	}
	for(i=0;i<10;i++){
		cout << k[i]+m[i] << endl;
	}
	
	getch();
	return 0;
}