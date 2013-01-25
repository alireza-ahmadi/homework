/*
	http://alireza.es/homework/ 
	Question: حاصل جمع توان 2 اعداد را نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int s,n,i;
	cin >> n;
	for(s=0,i=1;i<=n;i++){
		s = s+(i*i);
	}
	cout << s;
	 
	getch();
	return 0;
}

