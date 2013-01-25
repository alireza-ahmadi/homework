/*
	http://alireza.es/homework/ 
	Question: تابعی بنویسید که مقلوب عدد را برگرداند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int reverse(int a){
	int s=0;
	while(a!=0){
		s = s*10+(a%10);
		a = a/10;
	}
	return s;
}

int main(){
	int x;
	cin >> x;
	cout << reverse(x);
	
	getch();
	return 0;
}