#include<iostream>
using namespace std;

//4)Define three classes A, B, C carrying one integer member in each of them.
//Let C be derived from A and B.Write constructors and destructors in each of
//these classes that prompt some message from each class.Also the constructor
//of C should accept three values, one for its own member and other two for A
//and B.The C constructor should see that the two values goes to respective 
//constructors of A and B.What is the order in which constructors and destructors
//get called upon ? How can you change this order ?

class A
{
public:
	A(int x)
	{
		cout << "Inside Class A" << endl;
		cout << x << endl;
	}

	~A()
	{
		cout << "Inside Class A Destructor" << endl;
	}
};

class B
{
public:
	B(int k)
	{
		cout << "Inside Class B" << endl;
		cout << k << endl;
	}


	~B()
	{
		cout << "Inside Class B Destructor" << endl;
	}
};

class C:A,B
{
private:
	int num;
public:
	C(int k,int j,int l):A(20),B(30)
	{
		cout << "Inside Class C" << endl;
		this->num = k;
		cout << num << endl;
	}


	~C()
	{
		cout << "Inside Class C Destructor" << endl;
	}

};

int main()
{
	C c1(10,20,30);	//Constructor,destructor invocation


}