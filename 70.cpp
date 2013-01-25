/*
	http://alireza.es/homework/ 
	Question: برنامه ای بنویسید که یک ماتریس بالا مثلثی 4 در 4 تولید کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m[4][4],i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(j>i){
				m[i][j] = 1;
			}
			else{
				m[i][j] = 0;
			}
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cout << m[i][j];
		}
		cout << endl;
	}
	getch();
	return 0;
}