/*
	http://alireza.es/homework/ 
	Question: عدد را از مبنای 10 به 2 ببرد
*/
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main(){
	int s=0,n;
	cin >> n;
	for(int i=0;n!=0;i++){
		s = s+((n%2)*pow(10,i));
		n = n/2;
	}
	cout << s;
	 
	getch();
	return 0;
}

