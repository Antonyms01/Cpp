
/*3)create a class "MyClass1"
with members and member function "disp1().
create another class "MyClass2"
with members and member function "disp2().
now try to invoke disp1() from disp2()
in the main() function, create instances of both the classes and invoke their member functions.*/


#include<iostream>
using namespace std;

class MyClass1
{
public:
	int age=22;
	string name="Tanish";

	void disp1()
	{
		cout << age << endl << name << endl;
	}
};


class MyClass2
{
public:
	int age=21;
	string name="Durgesh";

	void disp2()
	{
		cout << age << endl << name << endl;
	}
};

int main()
{
	MyClass1 *c1 = new MyClass1();
	c1->disp1();
	MyClass2 *c2 = new MyClass2();
	c2->disp2();

}