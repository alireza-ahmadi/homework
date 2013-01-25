/*
	http://alireza.es/homework/ 
	Question: برنامه ای که یک عدد خوانده فاکتوریل آن را محاسبه کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i=1,f=1,n;
	cin >> n;
	while(i<=n){
		f = f*i;
		i++;
	}
	cout << f;
	 
	getch();
	return 0;
}

