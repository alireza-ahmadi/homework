/*
	http://alireza.es/homework/ 
	Question: تابعی که پس از دریافت یک آرایه، مجموعه عناصر آن را به برنامه اصلی بازگرداند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int sum(int x[],int len){
	int s = 0;
	for(int j=0;j<len;j++){
		s = s+x[j];
	}
	return s;
}
int main(){
	const int k=3;
	int m[k];
	
	for(int i=0;i<k;i++){
		cin >> m[i];
	}
	cout << sum(m,k);
	
	getch();
	return 0;
}