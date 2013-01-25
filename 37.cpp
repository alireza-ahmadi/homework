/*
	http://alireza.es/homework/ 
	Question: سری مشخصی را چاپ کند
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n,i=1,j;
	float s=0,f;
	cin >> n;
	while(i<=n){
		j=1;
		f=1;
		while(j<=i){
			f = f*j;
			j++;
		}
		s = s+(1/f);
		i++;
	}	
	cout << s;
	 
	getch();
	return 0;
}

