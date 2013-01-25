/*
	http://alireza.es/homework/ 
	Question: مشخص کند عدد اول است یا خیر
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x,i=1,j=0;
	cin >> x;
	while(i<=x){
		if(x%i==0){
			j++;
		}
		i++;
	}	
	if(j==2){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
	 
	getch();
	return 0;
}

