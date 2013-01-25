/*
	http://alireza.es/homework/ 
	Question: یک عدد و یک ماتریس از ورودی خوانده، عدد را در ماتریس ضرب کرده و در خروجی نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m[4][4],i,j,t=0;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cin >> m[i][j];
		}
	}
	cin >> t;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			m[i][j] = m[i][j] * t;
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}
	
	getch();
	return 0;
}