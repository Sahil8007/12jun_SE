#include<iostream>
using namespace std;
class cube
{
	public:
		int a,b,c,d;
		inline void mul()
		{
			a=22,b=11;
			c=a*b;
			cout<<"Multiplication is "<<c<<endl;
		}
		inline void cub()
		{
			a=10;
			d=a*a*a;
			cout<<"Cube is "<<d<<endl;
		}
};
int main()
{
	cube obj;
	obj.mul();
	cube obj2;
	obj2.cub();
	return 0;
}

