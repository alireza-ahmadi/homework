/*
	http://alireza.es/homework/ 
	Question: n عدد از ورودی دریافت کرده، به ازای هر عدد تابع فاکتوریل را صدا بزند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int fact(int n){
	int f = 1;
	for(int i=1;i<=n;i++){
		f = f*i;
	}
	return f;
}

int main(){
	int m,t;
	cin >> m;
	for(int j=0;j<m;j++){
		cin >> t;
		cout << fact(t);
	}
	
	getch();
	return 0;
}