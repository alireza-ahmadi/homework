/*
	http://alireza.es/homework/ 
	Question: اگر عدد کوچکتر از 100 بود قدر مطلقش را چاپ کند
*/


#include<iostream>
#include<conio.h>
#include<cmath>
int main()
{
	int i;
	std::cout<<"enter number:";
		std::cin>>i;
		if(i<=100)
		{
			i=std::abs(i);
		}
		std::cout<<i;
		 
	getch();
	return 0;
}

