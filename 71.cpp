/*
	http://alireza.es/homework/ 
	Question: برنامه ای بنویسید که یک ماتریس 4 در 4 از ورودی خوانده، اگر قطری باشد پیغام yes را چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m[4][4],i,j,t=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cin >> m[i][j];
		}
	}
	for(i=0;i<4;i++){
		if(m[i][i] != 1){
			t=1;
			break;
		}
	}
	if(t==0){
		cout << "Yes";
	}
	
	getch();
	return 0;
}