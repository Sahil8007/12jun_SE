#include <iostream>
#include <string>
using namespace std;
class cricketer{
	public:
		string name;
		int run,match,bestscore;
		double average;
		void output(){
			cout<<endl;
			cout<<"Player Information"<<endl<<endl;
			cout<<"Name :- "<<name<<endl;
			cout<<"Total Runs :- "<<run<<endl;
			cout<<"Highest Run Score :- "<<bestscore<<endl;
			cout<<"Average Runs :- "<<(double)run/match<<endl;
		}
};
class batsman:public cricketer
	{
	public:
		void player(){
		cout<<"Enter The Name Of Batsman:- ";
		cin>>name;
		cout<<"Enter Total Runs Of Batsman:- ";
		cin>>run;
		cout<<"Enter Number Of Matches Played By Batsman:- ";
		cin>>match;
		cout<<"Enter Best Performance Of Batsman:- ";
		cin>>bestscore;
		}
};
int main(){
	batsman obj;
	obj.player();
	obj.output();
	return 0;
}
