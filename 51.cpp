/*
	http://alireza.es/homework/ 
	Question: طول ضلع مربعی را گرفته، مربعی توپر چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,j,n;
	cin >>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "* ";
		}
		cout << endl;
	}
	 
	getch();
	return 0;
}

