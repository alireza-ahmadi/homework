/*
	http://alireza.es/homework/ 
	Question: تعدادی عدد خوانده، بر حسب مقدار فاکتوریل آن جواب خاصی بدهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n,m,i,j,f;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> m;
		for(f=1,j=1;j<=m;j++){
			f = f*j;
		}
		switch(f){
			case 24:
				cout << "red";
				break;
			case 144:
				cout << "green";
				break;
			default:
				cout << "black";
		}
	}
	 
	getch();
	return 0;
}

