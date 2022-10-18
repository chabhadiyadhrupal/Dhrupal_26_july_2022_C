#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
	string a;
	
	ofstream obj;
	obj.open("C:/Users/Admin/OneDrive/Desktop/jay.txt");
	obj<<"Enter your number";
	obj.close();
	
	ifstream obj1;
	obj.open("C:/Users/Admin/OneDrive/Desktop/jay.txt");
	obj1>>a;
	cout<<a;
	obj1.close();
	
	
	return 0;	
}

