#include<iostream>
using namespace std;
class demo
{
	public:
		void ANY(int a,int b)
		{
			cout<<"Enter Two Value To Make Addition:";	
			cin>>a>>b;
			cout<<"Addition Is:"<< a+b<<endl;
		}
		void ANY(double a,double b)
		{
			cout<<"Enter Two Values To Make Substraction:";	
			cin>>a>>b;
			cout<<"Substraction Is:"<< a-b<<endl;
		}
		void ANY(int a, double b)
		{
			cout<<"Enter Two Values To Make Multiplication:";	
			cin>>a>>b;
			cout<<"Multiplication Is:"<< a*b<<endl;
		}
		void ANY(double a,int b)
		{
			cout<<"Enter Two Values To Make Division:";	
			cin>>a>>b;
			cout<<"Division Is:"<< (double)a/b<<endl;
		}
};
int main()
{
	int a,b;
	double c,d;
	demo obj;
	obj.ANY(a,b);
	obj.ANY(c,d);
	obj.ANY(a,c);
	obj.ANY(d,a);
	return 0;
}
