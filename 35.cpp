/*
	http://alireza.es/homework/ 
	Question: عددی خوانده، تعداد ارقامش را مشخص کند
*/


#include<iostream>
#include<conio.h>
int main()
{
	int i=1,n;
	std::cout<<"enter number:";
	std::cin>>n;
		while(n/10!=0)
		{
			n=n/10;
			i++;
		}
		std::cout<<i;
		 
	getch();
	return 0;
}

