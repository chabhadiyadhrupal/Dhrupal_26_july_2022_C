#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
	string c;
	int a;
	int b; 
	
	ofstream obj;
	obj.open("C:/Users/Admin/OneDrive/Desktop/jay.txt");
	obj << "Enter Your table number :- ";
	cin >> b;
	for (a = 1; a <= 10; a++)
	{
		obj <<endl<< b <<" * " << a <<" = " << a * b;
	}
	obj.close();
	
	ifstream obj1;
	obj1.open("C:/Users/Admin/OneDrive/Desktop/jay.txt");
	obj1>>a>>b>>c;
	cout << "Your table is under:- ";
	for (a = 1; a <= 10; a++)
	{
	cout <<endl<< b <<" * " << a <<" = " << a * b;
	}
	obj1.close();
	
	
	return 0;	
}

