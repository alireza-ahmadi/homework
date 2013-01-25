/*
	http://alireza.es/homework/ 
	Question: بزرگترین عدد در میان سه عدد را بیابد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x,y,z;
	cin >> x >> y >> z;
	if(x<y){
		x = y;
	}
	if(x<z){
		x = z;
	}
	cout << x;
	 
	getch();
	return 0;
}