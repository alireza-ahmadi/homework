/*
	http://alireza.es/homework/ 
	Question: یکان عدد را به حروف بنویسد
*/


#include<iostream>
#include<conio.h>

int main()
{
	int i;
	std::cout<<"enter number:";
	std::cin>>i;
	i=i%10;
	switch(i)
	{
	case(0):std::cout<<"zero";break;
		case(1):std::cout<<"one";break;
		case(2):std::cout<<"two";break;
							case(3):std::cout<<"three";break;
									case(4):std::cout<<"four";break;
											case(5):std::cout<<"five";break;
											case(6):std::cout<<"six";break;
		case(7):std::cout<<"seven";break;
				case(8):std::cout<<"eight";break;
						case(9):std::cout<<"nine";break;
	}
	 
	getch();
	return 0;
}

