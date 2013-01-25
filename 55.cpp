/*
	http://alireza.es/homework/ 
	Question: جدول ضرب را چاپ کند
*/


#include<iostream>
#include<conio.h>

int main()
{
	int i=1,j=1,m;
	std::cout<<"enter M:";
	std::cin>>m;
		for(i=1;i<=m;i++) // Bug : for(i=1;j<=m;i++) | Mohammad Reza Akbari
		{
			std::cout<<"\n";
			for(j=1;j<=m;j++)
			{
				std::cout<<i*j;
			}
		}
		 
	getch();
	return 0;
}

