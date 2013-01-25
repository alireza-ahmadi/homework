/*
	http://alireza.es/homework/ 
	Question: تعدادی عدد از ورودی خوانده، هر جا 10 و 11 و 12 پشت سر هم بود ، 21 و 22 و 23 را جایگزین کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m[100],n,i;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> m[i];
	}
	for(i=2;i<n;i++){
		if(m[i]==12){
			if(m[i-1]==11 && m[i-2]==10){
				m[i] = 23;
				m[i-1] = 22;
				m[i-2] = 21;
			}			
		}
	}
	for(i=0;i<n;i++){
		cout << m[i] << " ";
	}
	getch();
	return 0;
}