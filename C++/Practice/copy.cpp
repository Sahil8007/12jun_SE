#include<iostream>
using namespace std;
class Copy
{
	public:
		int n;
		Copy(int no)
		{
			n=no;
		}
	Copy(Copy &s1)
	{
		n=++s1.n;
	}
	void display()
	{
		cout<<"The Value Of N Is :"<<n<<endl;
	}
};
int main()
{
	Copy obj1(45);
	obj1.display();
	Copy obj2=obj1;
	obj2.display();
	return 0;
}
