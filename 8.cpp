/*
	http://alireza.es/homework/ 
	Question: سن تقریبی را بر حسب ماه محاسبه کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int by,bm,y,m;
	cout << "Sal tavalod\nMah tavalod\nSal feli\nMah feli\n";
	cin >> by >> bm >> y >> m;
	cout << ((y-by)*12)+(m-bm);
	 
	getch();
	return 0;
}