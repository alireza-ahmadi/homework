/*
	http://alireza.es/homework/ 
	Question: آرایه ای 7 عضوی را به صورت صعودی مرتب کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m[7],i,j,t;
	for(i=0;i<7;i++){
		cin >> m[i];
	}
	for(i=6;i>0;i--){
		for(j=0;j<i;j++){
			if(m[j] > m[j+1]){
				t = m[j+1];
				m[j+1] = m[j];
				m[j] = t;
			}
		}
	}
	for(i=0;i<7;i++){
		cout << m[i] << " ";
	}
	getch();
	return 0;
}