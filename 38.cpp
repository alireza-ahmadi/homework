/*
	http://alireza.es/homework/ 
	Question: وارون عدد را محاسبه کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n,s=0;
	cin >> n;
	while(n!=0){
		s = s*10+n%10;
		n = n/10;
	}	
	cout << s;
	 
	getch();
	return 0;
}

