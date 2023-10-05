#include<iostream>
using namespace std;
class add
{
	public:
	int a,b,c;
	add(int a,int b)
	{
		c=a+b;
		cout<<"Addition is :"<<c<<endl;
	}	
};
class sub
{
	public:
	int a,b,c;
	sub(int a,int b)
	{
		c=a-b;
		cout<<"Subtraction is :"<<c<<endl;
	}	
};
class multi
{
	public:
	int a,b,c;
	multi(int a,int b)
	{
		c=a*b;
		cout<<"Multiplication is :"<<c<<endl;
	}	
};
class div
{
	public:
	int a,b;
	float c;
	div(int a,int b)
	{
		c=(float)a/b;
		cout<<"Division is :"<<c<<endl;
	}		
};
int main()
{
	int a,b;
	cout<<"Enter Value Of A And B:";
	cin>>a>>b;
	add S1(a,b);
	sub S2(a,b);
	multi S3(a,b);
	div S4(a,b);
	return 0;
}
