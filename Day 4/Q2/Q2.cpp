//2) create a class with constructors and destructor.
//create 2 instances on stack and 1 instance on heap.observe the invocation of 
// constructors and destructors.

#include<iostream>
using namespace std;

class demo
{
private:
	int num;

public:

	demo()
	{
		cout << "Inside Default Constructor"<<endl;
	}

	demo(int k)
	{
		this->num = k;
		cout << "Inside Param Constructor !!!"<<endl;
	}

	void display()
	{
		cout << num << endl;
	}

	~demo()
	{
		cout << "Inside destructor !!!"<<endl;
	}

};

int main()
{
	demo d;
	demo *d1=new demo(100);
	demo();								//Anonympous obj on stack
	new demo();							//Anonympous obj on heap
	d1->display();
	



}