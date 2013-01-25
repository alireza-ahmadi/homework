/*
	http://alireza.es/homework/ 
	Question: شکل مشخصی را چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,j,t;
	
	for(i=3;i>=0;i--){
		for(t=1,j=1;j>0;j=j+t){
			if(j>i){
				cout << "*";
			}
			else{
				cout << " ";
			}
			if(j==4){
				t=-t;
			}
		}
		cout << "\n";
	}
	
	getch();
	return 0;
}