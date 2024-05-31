//4) Define a class, write two member functions
//void disp1() { //some code }
//	void disp2() { // some code }
//
//		Try to call disp1   from    disp2.

#include<iostream>
using namespace std;
class demo
{
public:
	void disp1()
	{
		int a = 50;
		cout << a << endl;
	}

	void disp2(demo &);
	
	
};
void demo::disp2(demo &ref)
{
	ref.disp1();
}

int main()
{
	demo d;
	d.disp2(d);
}