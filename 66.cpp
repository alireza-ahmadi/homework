/*
	http://alireza.es/homework/ 
	Question: تعداد نمایش هر عدد را در آرایه نمایش دهد
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m[7],i,k,r,j;
	for(i=0;i<7;i++){
		cin >> m[i];
	}
	for(i=0;i<7;i++){
		if(m[i] != 0){
			k = m[i];
			r = 0;
			for(j=i+1;j<7;j++){
				if(m[j] == k){
					m[j] = 0;
					r++;
				}
			}
			cout << k << "\t: " << r << endl;
		}
	}
	getch();
	return 0;
}