/*
	http://alireza.es/homework/ 
	Question: از میان 10 عدد تعداد اعداد مثبت و منفی را چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i=0,j=0,n;
	for(int k=0;k<10;k++){
		cin >> n;
		if(n>=0){
			i++;
		}
		else{
			j++;
		}
	}
	cout << i << endl << j;
	 
	getch();
	return 0;
}

