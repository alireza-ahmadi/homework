/*
	http://alireza.es/homework/ 
	Question: تعدادی عدد از ورودی خوانده، مجموع ان ها را نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i=0,s=0,n,m;
	cin >> n;
	while(i<n){
		cin >> m;
		s = s+m;
		i++;
	}
	cout << s;
	 
	getch();
	return 0;
}

