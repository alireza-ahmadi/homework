/*
	http://alireza.es/homework/ 
	Question: آرایه 3 در 4 دریافت کرده و تعداد اعداد زوج را در خروجی نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m[3][4],i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cin >> m[i][j];	
		}
	}
	
	for(k=0,i=0;i<3;i++){
		for(j=0;j<4;j++){
			if((m[i][j])%2 == 0){
				k++;
			}			
		}
	}
	cout << k;
	
	getch();
	return 0;
}