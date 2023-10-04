#include<iostream>
using namespace std;

class Cal		//create class
{
	public:
		Cal(int a,int b)		//define perameters
		{
			int ch;				//veriable
			cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Divison"<<endl<<"5.Modulo";
			cout<<"Enter Your Choice :";
			cin>>ch;
			
		switch(ch)
		{
			case 1:
				cout<<"Addition Of A And B Is :"<<a+b;
			break;
			case 2:
				cout<<"Subtraction Of A And B Is :"<<a-b;
			break;
			case 3:
				cout<<"Multiplication Of A And B Is :"<<a*b;
			break;
			case 4:
				cout<<"Divison Of A And B Is :"<<a/b;
			break;
			case 5:
				cout<<"Modulo Of A And B Is :"<<a%b;
			break;
			default:
				cout<<"Please Enter Valid Input...";
			break;
		}
			
	}
};
int main()
{
	int a,b;
	cout<<"Enter The Value Of A :";
	cin>>a;
	cout<<"Enter The Value Of B :";
	cin>>b;
	Cal obj(a,b);
}
