#include<iostream>
using namespace std;

//3) create a class Person with "void walk()" method and "walks normally" 
//statement inside it.Now derive a class "Athelite" from Person and redefine 
//"void walk()" with a statement "walks faster".In the main function create an
//instance of "Athelite" and invoke "walk()" method.Observe what happens.

class person
{
public:

	person()
	{

	}


	void walk()
	{
		cout << "Walks Normally" << endl;
	}
};

class athelite : public person
{
public:

	athelite()
	{

	}
	athelite(int k)
	{
		cout << k << endl;
	}

	void walk()			//Redefinition
	{
		cout << "Walk Faster" << endl;
	}
};

int main()
{
	athelite a1;
	person *p1 = new athelite(10);		//Upcasting
	a1.walk();
	
}