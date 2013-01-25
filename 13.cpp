/*
	http://alireza.es/homework/ 
	Question: زوج یا فرد بودن عدد را مشخص کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x;
	cin >> x;
	if((x%2)==0){
		cout << "even";
	}
	else{
		cout << "odd";
	}
	 
	getch();
	return 0;
}

