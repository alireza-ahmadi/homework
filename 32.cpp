/*
	http://alireza.es/homework/ 
	Question: توان را محاسبه کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x,y,i=0,t=1;
	cin >> x >> y;
	while(i<y){
		t=t*x;
		i++;
	}	
	cout << t;
	 
	getch();
	return 0;
}

