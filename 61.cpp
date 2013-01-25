/*
	http://alireza.es/homework/ 
	Question: ارایه 7 عصوی خوانده، وارونش را نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,t;
	int m[7];
	for(i=0;i<7;i++){
		cin >> m[i];
	}
	for(i=0;i<3;i++){
		t = m[i];
		m[i] = m[6-i];
		m[6-i] = t;
	}
	for(i=0;i<7;i++){
		cout << m[i] << endl;
	}
	
	getch();
	return 0;
}