#include<iostream>
using namespace std;
class student
{
	public:
    	int rollnum;
    	void roll()
		{
        	cout<<"Enter The Roll Number:";
        	cin>>rollnum;
    }
};
class test:public student
{
	public:
    	int maths, sci;
    	void marks()
		{
        cout<<"Enter The Marks Of Maths:";
        cin>>maths;
        cout<<"Enter The Marks Of Science:";
        cin>>sci;
    }
};
class result:public test
{
	public:
    	void output()
		{
    	cout<<"Students Result"<<endl<<endl;
    	cout<<"Roll Number: "<<rollnum<<endl;
    	cout<<"Marks Of Maths: "<<maths<<endl;
    	cout<<"Marks Of Science: "<<sci<<endl;
    	cout<<"Total Marks Obtained: "<<maths+sci<<endl;
    }
};
int main()
{
    result obj;
    obj.roll();
    obj.marks();
    cout<<endl;
    obj.output();
    return 0;
}
