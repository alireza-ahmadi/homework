/*
	http://alireza.es/homework/ 
	Question: رایاه ای به طول 7 را خوانده و برعکس به خروجی ببرد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i;
	int m[7];
	for(i=0;i<7;i++){
		cin >> m[i];
	}
	for(i=6;i>=0;i--){
		cout << m[i] << endl;
	}
	
	getch();
	return 0;
}