/*
	http://alireza.es/homework/ 
	Question: ماتریس 3 در 3 بالا مثلثی چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i<j){
				cout << "1 ";
			}
			else{
				cout << "0 ";
			}
		}
		cout << endl;
	}
	 
	getch();
	return 0;
}

