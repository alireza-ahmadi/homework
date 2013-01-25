/*
	http://alireza.es/homework/ 
	Question: برنامه ای که تعدادی عدد از ورودی خوانده، مجموع مقسوم علیه های هر کدام را نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i=0,m,n,j,s;
	cin >> n;
	while(i<n){
		s = 0;
		j = 1;
		cin >> m;
		while(j<=m){
			if(m%j==0){
				s = s+j;
			}
			j++;
		}
		cout << s << endl;
		i++;
	}
	 
	getch();
	return 0;
}

