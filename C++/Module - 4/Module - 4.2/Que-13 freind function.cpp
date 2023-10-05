#include<iostream>
using namespace std;
class demo
{
	private:
		int a,b;
		public:
			void input()
			{
				cout<<"Enter Two Values To Find Max:"<<endl;
				cout<<"Enter Value Of A:";
				cin>>a;
				cout<<"Enter Value Of B:";
				cin>>b;
			}
			friend void Max(demo x);
};
void Max(demo x)
{
	if(x.a>x.b)
	{
		cout<<x.a<<" Is The Maximum Value"<<endl;
	}
	else
	{
		cout<<x.b<<" Is The Maximum Value"<<endl;
	}
}
int main()
{
	demo x;
	x.input();
	Max(x);
	return 0;
}

