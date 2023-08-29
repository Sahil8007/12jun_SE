#include<iostream>
using namespace std;
class animal
{
	int num;
	public:
		animal(int num)
		{
			this->num=num;
		}
		void display()
		{
			cout<<"Your Id Is :"<<num;
		}
};
int main()
{
	animal a1(21);
	a1.display();
	return 0;
}
