/*
	http://alireza.es/homework/ 
	Question: شکل خاصی را در خروجی نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,j,t=1;
	for(i=1;i>0;i+=t){
		for(j=1;j<=i;j++){
			cout << j << " ";
		}
		if(i==5){
			t = -t;
		}
		cout << endl;
	}
	 
	getch();
	return 0;
}
