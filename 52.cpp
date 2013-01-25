/*
	http://alireza.es/homework/ 
	Question: 10 نمره برای 5 دانشجو دریافت کرده، معدل هر کدام را چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,j,n;
	float s;
	for(i=0;i<5;i++){
		for(s=0,j=0;j<10;j++){
			cin >> n;
			s = s+n;
		}
		cout << (s/10) << endl;
	}
	 
	getch();
	return 0;
}

