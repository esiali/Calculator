// Welcome to project shape
// This program was written and developed by Ali esmaily in October 23, 2024.

#include<windows.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
char rat(int a=5)// right angled triangle function
{
	for(int i=1;i<=a;i++)
	{
		cout<<" ";
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
char rrat(int a=5)// reverse right angled triangle function
{
	for(int i=1;i<=a;a--)
	{
		cout<<" ";
		for(int j=a;j>0;j--)
		{
			cout<<" ";
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
char rect(int a=3, int b=10)// rectangle function 
{
	for(int i=1;i<=a;i++)
	{
		cout<<" ";
		for(int j=1;j<=b;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	return 0;
}
char square(int a=4)// square function
{
	for(int i=1;i<=a;i++)
	{
		cout<<" ";
		for(int j=1;j<=a;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	return 0;
}
int main()
{
	char shape,h;// variables
	int a,b;
	
	start:// label
	cout<<" Please choose your shape\n\n S:[Square]\n C:[Circle]\n T:[Triangle]\n R:[Rectangle]\n "<<endl;
	cin>>shape;cout<<"\n";
	
	conditions:// label
	if(shape=='S' || shape=='s')
	{
		cout<<" Sample:"<<endl;
		cout<<endl<<square();
		cout<<" Please enter the height and width of square"<<endl;
		cin>>a;
		cout<<square(a);
		goto start;
	}
	else if(shape=='C' || shape=='c')
	{
		cout<<"    **\n   *  *\n  *    *\n  *    *\n   *  *\n    **\n\n ";
		goto start;
	}
	else if(shape=='T' || shape=='t')
	{
		triangle:
		cout<<" Which one?\n R:[Reverse right angled triangle]\n N:[Normal right angled triangle]"<<endl;
	    cin>>h;
	    if(h=='R' || h=='r')
		{
			cout<<" Sample:"<<endl;
			cout<<endl<<rrat();
			cout<<" Please enter height of the reverse triangle "<<endl;
	        cin>>a;
			cout<<rrat(a);
			goto start;
		}
		else if(h=='N' || h=='n')
		{
			cout<<" Sample:"<<endl;
			cout<<endl<<rat();
			cout<<" Please enter height of the triangle "<<endl;
	        cin>>a;
			cout<<rat(a);
			goto start;
		}
		else
		{
			cout<<" Invalid value for triangle"<<endl;
			goto triangle;
		}
	}
	else if(shape=='R' || shape=='r')
	{
		cout<<" Sample:"<<endl;
		cout<<endl<<rect();
		cout<<" Please enter the height of rectangle :"<<endl;
		cin>>a;
		cout<<" Please enter the width of rectangle :"<<endl;
		cin>>b;
		cout<<rect(a,b);
		goto start;
	}
	else
	{
		cout<<" Sorry, invalid letter!\n"<<endl;
		goto start;
	}
	return 0;
}