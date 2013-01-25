/*
	http://alireza.es/homework/ 
	Question: تعدادی عدد از ورودی خوانده، اولی و دومین بزرگترین عدد را نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x=0,y=0,m,n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> m;
		if(m>x){
			y = x;
			x = m;
		}
		else if(m>y){
			y=m;
		}
	}
	cout << x << endl << y;
	 
	getch();
	return 0;
}

