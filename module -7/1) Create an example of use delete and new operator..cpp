#include<iostream>
using namespace std;

class garden
{
	private :
		int Public;
		int privet ;
	public :
		garden ()
		{
			cout << "Enter privet in the garden :- ";
			cin >> privet;
			cout << "Enter public in the garden :- ";
			cin >> Public;
		}
		void show ()
		{
			cout <<endl << "Total privet :- " << privet;
			cout <<endl <<"Total Public :- " <<Public;
		}
};
int main ()
{
	cout <<endl << "--------Enter the information of garden--------"<<endl;
	garden *ptr = new garden ();  // new operator use
	cout <<endl << "--------Show the information of garden--------"; 
	ptr -> show ();
	
	delete ptr; // delete operator use for relese memory
	
	return 0;
}
