/*
	http://alireza.es/homework/ 
	Question: جای ستون دوم و چهارم ماتریس دریافتی را عوض کند
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
	
	for(i=0;i<3;i++){
		k = m[i][1];
		m[i][1] = m[i][3];
		m[i][3] = k;
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout << m[i][j];	
		}
		cout << endl;
	}
	
	getch();
	return 0;
}