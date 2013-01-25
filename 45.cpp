/*
	http://alireza.es/homework/ 
	Question: وارون تعدادی عدد را چاپ کند
*/


#include<iostream>
#include<conio.h>
int main()
{
	int n,i,x,m=0,s;
	std::cout<<"enter tedad adade varede ra:";
	std::cin>>n;
	for(i=1;i<=n;i++)
	{
		std::cout<<"enterv adad:";
		std::cin>>x;
		for(s=0;x!=0;) // Bug : for(s=0;x!=0;s++) | Mohammad Reza Akbari
		{
			m=x%10;
			x=x/10;
			s=(s*10)+m;
		}
		std::cout<<s;
	}
		 
	getch();
	return 0;
}

