/*
	http://alireza.es/homework/ 
	Question: 10 عدد از کاربر خوانده، آن ها را در یک آرایه بریزد و سپس عناصر را یکی به جلو انتقال دهد، یعنی اولی و آخری جابجا شوند
*/


#include<iostream>
#include<conio.h>

int main()
{
	int p[10],i,b;
	for(i=0;i<=9;i++)
	{
		std::cout<<"enter arraye";
		std::cin>>p[i];
	}
		b=p[9];
		for(i=9;i>0;i--)
		{
			p[i]=p[i-1];
		}
		p[0]=b;
			for(i=0;i<=9;i++)
			{
				std::cout<<p[i];
				std::cout<<"\n";
			}
			 
	getch();
	return 0;
}