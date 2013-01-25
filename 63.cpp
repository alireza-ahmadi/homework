/*
	http://alireza.es/homework/ 
	Question: عددی 5 رقمی خوانده، با حدف صفر آن را نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m[5],n,i,t,j;
	cin >> n;
	for(i=0;n!=0;){
		t=n%10;
		if(t!=0){
			m[i] = t;
			i++;
		}
		n = n/10;
	}
	for(j=i-1;j>=0;j--){
		cout << m[j];
	}
	getch();
	return 0;
}