//5) create a class, define different types of constructors.in main create n number of 
// objects.At the end display how many constructors are created for a class.

#include<iostream>
using namespace std;

class demo
{
	private:
	int num;
	static int count;


	public:
	
	demo()
	{
		cout << "Inside Default Constructor"<<endl;
		count++;
		cout << count << endl;
	}

	demo(int k)
	{
		this->num = k;
		cout << num << endl;
		cout << "Inside Param Constructor!!!"<<endl;
		count++;
		cout << count << endl;
	}

	demo(demo &d)
	{
		num = d.num;
		count++;
		cout << "Inside copy constructor"<<endl<<num<<endl;
		cout << count << endl;
	}

	~demo()
	{
		cout << "Inside Destructor"<<endl;
	}

};

int demo::count=0;


int main()
{
	demo d1;
	demo *d5 = new demo();
	demo d(100);
	demo d3(200);
	demo d2 = d;
	demo d4 = d2;
	

}