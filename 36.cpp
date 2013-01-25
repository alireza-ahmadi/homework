/*
	http://alireza.es/homework/ 
	Question: عددی از ورودی خوانده، یکان ، دهگان و صدگان را نمایش دهد
*/
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main(){
	int n,j=0;
	cin >> n;
	while(n!=0){
		cout << (n%10)*pow(10,j) << endl;
		n = n/10;
		j++;
	}	
	 
	getch();
	return 0;
}

