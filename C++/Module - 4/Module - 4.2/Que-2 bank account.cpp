#include<iostream>
using namespace std;

class bankaccount
	{
	public:
	int id,balance,ch,withdraw,deposit;
	string name;
	void account()
	{
		cout<<"Account Number:";
        cin>>id;
        switch(id)
		{
        	case 1:
        	balance=10;
        	name="Niks";
            cout<<"Account No :-"<<id<<endl;
            cout<<"Account Holder Name :- "<<name<<endl;
            cout<<"Account Type :- Saving"<<endl;
            cout<<"Account Balance :- "<<balance<<endl<<endl;
				break;
        	case 2:
        	balance=1;
        	name="Niks";
            cout<<"Account No :-"<<id<<endl;
            cout<<"Account Holder Name :- "<<name<<endl;
            cout<<"Account Type :- Saving"<<endl;
            cout<<"Account Balance :- "<<balance<<endl<<endl;
				break;
        }
        cout<<"Press 1 For Deposit Money And Press 2 For Withdraw Money:";
        cin>>ch;
        switch(ch)
		{
        	case 1:
        			cout<<"Enter Amount To Deposit:";
        			cin>>deposit;
        			balance=balance+deposit;
        			cout<<"Account Holder Name :- "<<name<<endl;
        			cout<<"Total Balance:"<<balance<<endl<<endl;
        			break;
			case 2:
					cout<<"Enter Amount To Withdraw:";
        			cin>>withdraw;
        			balance=balance-withdraw;
        			cout<<"Account Holder Name :- "<<name<<endl;
        			cout<<"Total Balance Is:"<<balance<<endl<<endl;
				break;
		}
		cout<<endl<<"Thank You..."<<endl;
	}	
};

int main(){
	bankaccount obj;
	obj.account();
	return 0;
}
