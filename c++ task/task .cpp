#include<iostream>
using namespace std;
class abstrection
{
	private:
		 int a,b;
	public:
	void set(int y, int z)
	{
		a=y;
		b=z;
	}
	void display()
	{
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
		
	}
};
int main()
{
	abstrection obj;
	obj.set(36,40);
	obj.display();
	return 0;
}  
