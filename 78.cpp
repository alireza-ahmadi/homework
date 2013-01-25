/*
	http://alireza.es/homework/ 
	Question: پس از دریافت آرایه ای 4 عضوی، آن را از آخر به اول چاپ کند(با استفاده از تابع)
*/
#include <iostream>
#include <conio.h>

using namespace std;
void reverse(int tmp[4]){
	for(int j=3;j>=0;j--){
		cout << tmp[j];
	}
}
int main(){
	int m[4];
	
	for(int i=0;i<4;i++){
		cin >> m[i];
	}
	reverse(m);
	
	getch();
	return 0;
}