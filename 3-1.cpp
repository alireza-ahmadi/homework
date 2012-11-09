#include <iostream>

int main(){
	int to = 5;
	int fact = 1;
	for(int i = to;i>0;i--){
		fact = fact * i;
	}
	std::cout << fact;
	return 0;
}