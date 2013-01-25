/*
	http://alireza.es/homework/ 
	Question: ریشه های معادله درجه 2 را به دست آورد
*/
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main(){
	int a,b,c,d;
	float x,m;
	cin >> a >> b >> c;
	d = pow(b,2)-4*a*c;
	
	if(d<0){
		cout << "javab nadarad";
	}
	else{
		x = sqrt(d);
		m = (-b+x)/(2*a);
		cout << m;
		m = (-b-x)/(2*a);
		cout << m;
	}
	 
	getch();
	return 0;
}

