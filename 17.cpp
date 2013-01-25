/*
	http://alireza.es/homework/ 
	Question: اگر مثلث متساوی الساقین بود پیغام دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a==b || a==c || b==c){
		cout << "yes";
	}
	 
	getch();
	return 0;
}
