#include<iostream>
using namespace std;
class demo
{
	public:
		double TRY;
		void Area(double r)
		{
			cout<<"Enter The Radius Of Circle:";
			cin>>r;
			TRY=3.14*r*r;
			cout<<"Area Of Circle:"<<TRY<<endl<<endl;
		}
		void Area(int a,int b)
		{
			cout<<"Enter The Lenght And Width Of Rectangle:";
			cin>>a>>b;
			TRY=a*b;
			cout<<"Area Of Rectangle:"<<TRY<<endl<<endl;
		}
		void Area(double a,double b)
		{
			cout<<"Enter The Base And Height Of Triangle:";
			cin>>a>>b;
			TRY=0.5*a*b;
			cout<<"Area Of Triangle:"<<TRY<<endl<<endl;
		}
};

int main()
{
	int a,b;
	double c,d;
	demo obj;
	obj.Area(c);
	obj.Area(a,b);
	obj.Area(c,d);
	return 0;
}
