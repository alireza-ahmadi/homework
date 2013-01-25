/*
	http://alireza.es/homework/ 
	Question: عددی از ورودی خوانده و بنا بر مقدار آن ، جواب متفاوتی چاپ کند
*/


#include<iostream>
#include<conio.h>

int main()
{
	int x,y;
	std::cout<<"enter number:";
	std::cin>>x;
	if(x<0)
	{
		y=3*x-2;
	}
	else
		if(x==0)
		{
			y=2;
		}
		else
			if(x>0)
			{
				y=3*x+5;
			}
			std::cout<<y;
				 
	getch();
	return 0;
}

