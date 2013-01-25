/*
	http://alireza.es/homework/ 
	Question: برنامه ای که سری 1-2+3 ... را چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n,i=1,j=1,s=0;
	cin >> n;
	while(i<=n){
		s = s+(i*j);
		j=-j;
		i++;
	}	
	cout << s;
	 
	getch();
	return 0;
}

