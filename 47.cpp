/*
	http://alireza.es/homework/ 
	Question: از میان تعدادی عدد، اعداد زوج و کامل را نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n,m,i,j,s;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> m;
		if(m%2==0){
			for(s=0,j=1;j<m;j++){
				if(m%j==0){
					s = s+j;
				}
			}
			if(s==m){
				cout << m << endl;
			}
		}
	}
	 
	getch();
	return 0;
}

