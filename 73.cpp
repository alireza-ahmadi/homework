/*
	http://alireza.es/homework/ 
	Question: دو ماتریس 3 در 4 و 4 در 3 از ورودی دریافت کرده و نتیجه ضرب این دو آرایه را در خروجی نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m1[3][4],m2[4][3],i,j,k,r[3][3];
	
	cout << "3*4" << endl;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cin >> m1[i][j];
		}
		cout << endl;
	}
	
	cout << "4*3" << endl;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cin >> m2[i][j];
		}
		cout << endl;
	}
	
	cout <<endl << endl;
	
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			r[i][k] = 0;
			for(j=0;j<4;j++){
				r[i][k] = r[i][k] + m1[i][j]*m2[j][k]; 
			}
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout << r[i][j] << "\t";
		}
		cout << endl;
	}
	getch();
	return 0;
}