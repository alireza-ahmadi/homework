/*
	http://alireza.es/homework/ 
	Question: تعدادی عدد خوانده ، اگر یکانشان 0 یا 7 بود چاپشان کند
*/


#include<iostream>
#include<conio.h>
int main()
{
	int a,c,m,i=0;
	std::cout<<"enter M=tedade adade vared shode:";
		std::cin>>m;
		while(i<m)
		{
			std::cout<<"enter a=adad:";
			std::cin>>a;
			c=a%10;
			i++;
			if(c==7||c==0)
			{
				std::cout<<c;
				std::cout<<"\n";
			}
		}
			 
	getch();
	return 0;
}

