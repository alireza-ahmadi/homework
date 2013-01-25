/*
	http://alireza.es/homework/ 
	Question: تعداد نمایش عدد در آرایه را چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,k,j=0;
	int m[10];
	for(i=0;i<10;i++){
		cin >> m[i];
	}
	cin >> k;
	for(i=0;i<10;i++){
		if(m[i]==k){
			j++;
		}
	}
	cout <<j;
	getch();
	return 0;
}