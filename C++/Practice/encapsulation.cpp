#include<iostream>
using namespace std;
class dog
{
	int num;
	string nm;
	public:
		dog(int num)
		{
			this ->num=num;
		}
		void display()
		{
			cout<<"Enter Your Name :";
			cin>>nm;
			cout<<nm<<ends<<"Your Id Is :"<<num;
		}
};
int main()
{
	dog d1(9);
	d1.display();
	return 0;
}
