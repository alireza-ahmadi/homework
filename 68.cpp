/*
	http://alireza.es/homework/ 
	Question: جای سطر اول و آخر آرایه عوض شود
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
	
	for(i=0;i<4;i++){
		k = m[0][i];
		m[0][i] = m[2][i];
		m[2][i] = k;
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