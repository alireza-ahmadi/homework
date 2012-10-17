#include <iostream>

using namespace std;

int main(){
	int m,n,i,w,r,t,u;
	i =0;
	cin >> m;
	for(int j=0;j<m;j++){
		u = 0;
		cin >> n;
		w = n%10;
		if(n/10 == 0){
			continue;
		}
		while(n != 0){
			r = n/10;
			t = n - (r*10);
			if(w!=t){
				u = 1;
				break;
			}
			n = r;
		}
		if(!u){
			i++;
		}
	}
	cout << i;
	
	return 0;
}