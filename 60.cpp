/*
	http://alireza.es/homework/ 
	Question: مکان های یک عدد در آرایه را مشخص کند
*/


#include<iostream>
#include<conio.h>

int main()
{
	int i,p[10],n,j=0; // Bug : p[10] | Mohammad Reza Akbari
	for(i=0;i<=9;i++)
	{
		std::cout<<"enter araye:";
		std::cin>>p[i];
	}
	std::cout<<"enter addad:";
		std::cin>>n;
		for(i=0;i<=9;i++)
		{
			if(p[i]==n)
			{
				std::cout<<i;
			j++;
			}
		}
		if(j==0)
		{
			std::cout<<"no";
		}
		 
	getch();
	return 0;
}

