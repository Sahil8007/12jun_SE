#include<iostream>
#include<string.h>
using namespace std;
class person
{
	public:
		string name;
		int age;
		void pin()
		{
    	cout<<"Person Name:";
    	cin>>name;
    	cout<<"Enter Person Age:";
    	cin>>age;
	}
		void pout()
		{
    	cout<<"Person Name:"<<name<<endl;
    	cout<<"Person Age:"<<age<<endl;
   }
};
class student
{
		public:
   		int percentage;
   		void sin()
		   {
        	cout<<"Enter Student Percentage:";
        	cin>>percentage;
    }
    	void sout()
		{
        cout<<"Student Percentage:"<<percentage<<endl;
    }
};
class teacher:public person,public student
{
    public:
    string teachername;
    int salary;
    void tin(){
        cout<<"Enter Teacher Name:";
        cin>>teachername;
        cout<<"Enter Salary Of Teacher:";
        cin>>salary;
    }
    void tout(){
        cout<<"Teacher Name:"<<teachername<<endl;
        cout<<"Teacher Salary:"<<salary<<endl;
    }

};
int main(){
    teacher obj;
    obj.pin();
    cout<<endl;
    obj.sin();
     cout<<endl;
    obj.tin();
     cout<<endl;
    obj.pout();
     cout<<endl;
    obj.sout();
     cout<<endl;
    obj.tout();
    return 0;
}

