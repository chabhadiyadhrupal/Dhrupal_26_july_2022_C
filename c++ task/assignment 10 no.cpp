/*
Create a class account that stores customer name, account number and
type of account. From this derive classes curr_acc and sav_acct to make
them more specific to their requirements Include necessary member
functions in order to achieve the following tasks
a) Accepts deposit from a customer and update balance.
b) Display the balance.
c) Compute and deposit interest.
d) Permit withdraws and updates the balance.
e) Check for the minimum balance, impose penalty, necessary and
update the balance.
*/

#include <iostream>
using namespace std;

class account
{
	private :
		string name;
		long double acno;
	public :
		float Balance;
		float year;
		void customerdetails ()
		{
			cout << endl << "Enter the name :- ";
			cin >> name;
			cout << "Enter the account no. :-";
			cin >> acno;
			cout << "how many years to open account :- ";
			cin >> year;
			cout << "Enter your Balance :- ";
			cin >> Balance;	
		}
		void showbalance ()
		{
			cout << "Your balance is :- "<<Balance;
		}
};
//a) Accepts deposit from a customer and update balance.
//b) Display the balance.
class saving : public account
{
	private :
		float depamount;
		float SI;
		float withamount;
	public :
		void deposit ()
		{
			cout << "Enter your deposit amount :- "	;
			cin >> depamount ;
			Balance +=depamount;
		}
		void depositinterest ()
		{
			cout <<endl << "\n******Your deposit interest is below *******";
			SI = (year * Balance * 7.9)/100;
			cout <<endl<< "Your simple interest is :- "<<SI<<endl;
			Balance +=SI;
		}
		void withdraws ();
		float penalty;
		void minbalance ()
		{
			cout << "\n\nMinimum balance 5000 must be kept in this account :- "	;
			if (Balance < 5000)
			{
				penalty = (Balance * 5)/100;
				cout <<endl <<"Your penalty amount is :- "<<penalty;
				Balance -= penalty;
				cout << "\n!!!!!If this penalty amount will not be deposite in time so police catch you!!!!! \n";
			}
		}
};
void saving :: withdraws ()
{
	cout <<endl << "Enter withdral amount :- ";
	cin >>withamount;
	Balance -= withamount;
}
int main ()
{
	saving s1;
	s1.customerdetails();
	s1.deposit();
	s1.showbalance();
	s1.depositinterest();	
	s1.showbalance();
	s1.withdraws();
	s1.showbalance();
	s1.minbalance();
	s1.showbalance();
}
