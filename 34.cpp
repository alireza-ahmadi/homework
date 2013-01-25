/*
	http://alireza.es/homework/ 
	Question: تعدادی عدد خوانده، اعداد کامل را روی صفحه نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n,i=0,s,j,m;
	cin >> n;
	while(i<n){
		s=0;
		j=1;
		cin >> m;
		while(j<m){
			if(m%j==0){
				s = s+j;
			}
			j++;
		}
		if(s==m){
			cout << m << endl;
		}
		i++;
	}	
	 
	getch();
	return 0;
}

