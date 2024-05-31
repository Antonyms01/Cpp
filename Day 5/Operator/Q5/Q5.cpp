//5) Define a class with constructor and member function
//
//create object, call member function
//now create a reference to that object, and using that reference try to call member function

#include<iostream>
using namespace std;

class demo
{
private:
	int num;
public:

	demo(int k)
	{
		this->num = k;
	}
	void disp()
	{
		cout << num << endl;
	}
};

int main()
{
	demo d(10);
	d.disp();
	demo &o = d;
	o.disp();
}