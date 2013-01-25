/*
	http://alireza.es/homework/ 
	Question: تابعی بنویسید که دو عدد صحیح خوانده، اولی را به توان دومی برساند
*/
#include<iostream>
#include<conio.h>
int p(int a,int b)
{
	int i=0,t=1;
	for(i=0;i<b;i++)
	{
		t=a*t; // Bug a=a*b | Mohammad Reza Akbari
	}
	return t; // Bug return p(a,b) | Mohammad Reza Akbari
}
int main()
{
	int a,b;
	std::cout<<"enter adade aval:";
	std::cin>>a;
	std::cout<<"enter adade dovom:";
	std::cin>>b;
	std::cout<<p(a,b);
	 
	getch();
	return 0;
}

