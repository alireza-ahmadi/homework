/*
	http://alireza.es/homework/ 
	Question: مجموع اعداد یک تا 10 را نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i=1,s=0;
	while(i<=10){
		s = s+i;
		i++;
	}
	cout << s;
	 
	getch();
	return 0;
}

