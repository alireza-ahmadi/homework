/*
	http://alireza.es/homework/ 
	Question: مجموع اعداد یک تا صد را محاسبه کند
*/


#include<iostream>
#include<conio.h>
int main()
{
	int a=0,b,c;
	for(b=1;b<=100;b++)
	{
		a=a+b;
	}
	std::cout<<a;
	 
	getch();
	return 0;
}

