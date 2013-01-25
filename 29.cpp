/*
	http://alireza.es/homework/ 
	Question: ببرنامه ای که تعدادی عدد خوانده، فاکتوریل هر یک را محاسبه کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,f,n,m,j=0;
	cin >> m;
	while(j<m){
		i=1;
		f=1;
		cin >> n;
		while(i<=n){
			f = f*i;
			i++;
		}
		cout << f << endl;
		j++;
	}
	 
	getch();
	return 0;
}

