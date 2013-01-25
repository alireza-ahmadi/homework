/*
	http://alireza.es/homework/ 
	Question: شکل خاصی را در خروجی نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,j;
	for(i=4;i>0;i--){
		for(j=1;j<=i;j++){
			cout << j << " ";
		}
		cout << endl;
	}
	 
	getch();
	return 0;
}

