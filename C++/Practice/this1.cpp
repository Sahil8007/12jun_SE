#include<iostream>
using namespace std;
class kuch
{
	int a=76;
	public:
		kuch(int a)
		{
			cout<<"Value Of A Is :"<<a<<endl;
			cout<<"Value Of A Is :"<<this->a;
		}
};
int main()
{
	kuch a1(20);
	return 0;
}
