/*
	http://alireza.es/homework/ 
	Question: یک عدد از ورودی خوانده، از یک تا آن عدد را چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cout << i << endl;
	}
	 
	getch();
	return 0;
}

