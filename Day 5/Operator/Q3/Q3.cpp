

#include<iostream>
using namespace std;


class parent
{
private:
	int num1;
	friend void caller();
};

class child:public parent
{
private:
	int num2;
public:
	void caller()
	{
		parent p;
		cout << p.num1 << endl;
		child c;
		cout << c.num2 << endl;
	};
	void main()
		{
		caller();
		}

//Answer: Compile Error