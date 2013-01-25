/*
	http://alireza.es/homework/ 
	Question: تعدادی عدد از ورودی بخواند، تعداد اعداد زوج رو چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i=0,j=0,n,m;
	cin >> n;
	while(i<n){
		cin >> m;
		if(m%2==0){
			j++;
		}
		i++;
	}
	cout << j;
	 
	getch();
	return 0;
}

