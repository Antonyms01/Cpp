#include<iostream>
using namespace std;

//5) create a class Base with "int num1", parameterized constructor and 
//destructor.Derive class Sub1 from Base with "int num2", parameterized 
//constructor and destructor.Now derive class Sub2 from Sub1 with "int num3", 
//parameterized constructor and destructor.
//in the main function create the object of Sub1 and notice constructor and 
//destructor invocation.

class Base
{
public:
	int num1;

	

	Base(int x)
	{
		cout << "Inside Base Param Constrctor" << endl;
	}

	~Base()
	{
		cout << "Inside Base destructor<<endl" << endl;
	}
};

class Sub1 :Base
{
public:
	int num2;

	

	Sub1(int x):Base(45)
	{
		cout << x << endl;
	}

	~Sub1()
	{
		cout << "Inside Sub destructor" << endl;
	}
};

class Sub2 :Sub1 
{
public:
	int num3;
	Sub2(int x):Sub1(89)
	{
		cout << "Inside Sub2  Constrctor" << endl;
	}

	~Sub2()
	{
		cout << "Inside Sub2 destructor" << endl;
	}
};

int main()
{
	Sub1 s1(10);

}