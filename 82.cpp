/*
	http://alireza.es/homework/ 
	Question: تابعی که عناصر آرایه دریافتی را در 2 ضرب کرده و در خروجی نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

void mp(int x[],int len){
	for(int j=0;j<len;j++){
		cout << x[j]*2;
	}
}
int main(){
	const int k=4;
	int m[k];
	
	for(int i=0;i<k;i++){
		cin >> m[i];
	}
	mp(m,k);
	
	getch();
	return 0;
}