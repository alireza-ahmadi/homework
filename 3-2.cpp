#include <iostream>

int main(){
	int f1 = 0;
	int f2 = 1;
	int f3 = f1+f2;
	std::cout << f1 << "\n";
	std::cout << f2 << "\n";
	
	for(int i=2;i<=10;i++){
		f3 = f1+f2;
		std::cout << f3 << "\n";
		f1 = f2;
		f2 = f3;
	}
	return 0;
}