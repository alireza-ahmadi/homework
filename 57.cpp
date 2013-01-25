/*
	http://alireza.es/homework/ 
	Question: از میان 10 عدد بزرگترین را مشخصی کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,j=0;
	int m[10];
	for(i=0;i<10;i++){
		cin >> m[i];
	}
	for(i=1;i<10;i++){
		if(m[i] > m[j]){
			j = i;
		}
	}
	cout << m[j] << endl << j+1;
	
	getch();
	return 0;
}