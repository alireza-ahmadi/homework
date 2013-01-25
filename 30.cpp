/*
	http://alireza.es/homework/ 
	Question: برنامه ای که n جمله اول فیبوناچی را چاپ کند
*/


#include<iostream>
#include<conio.h>
int main()
{
	int a=1,b=1,c=1,n,i=3;
	std::cout<<"enter tedad ra vared konid:";
	std::cin>>n;
	std::cout<<a<<b;
	while(i<=n)
	{
		c=a+b;
			std::cout<<c << std::endl;
				a=b;
			b=c;
			i++;
	}
	 
	getch();
	return 0;
}

