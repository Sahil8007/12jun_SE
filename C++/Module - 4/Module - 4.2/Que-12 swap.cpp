#include<iostream>
using namespace std;
class demo
{
		public:
			int a,b;
			void input()
			{
				cout<<"Enter Two Values To Swap:"<<endl;
				cout<<"Enter Value Of A:";
				cin>>a;
				cout<<"Enter Value Of B:";
				cin>>b;
				cout<< "Before Swapping:" << endl;
            	cout<<"A = " << a<<endl; 
            	cout<<"B = " << b<<endl<<endl;
			}
			friend void swap();
			void display(){
				cout<<"After Swap A Is :"<< a<<endl;
 				cout<<"After Swap B Is :"<< b<<endl;
			}
};
void swap(demo &x)
{
	x.a=x.a+x.b;
	x.b=x.a-x.b;
	x.a=x.a-x.b;
}
int main()
{
	demo obj;
	obj.input();
	swap(obj);
	obj.display();
	return 0;
}
