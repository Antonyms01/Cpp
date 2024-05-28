#include<iostream>
using namespace std;


class parent
{
public:
	void disp1()
	{
		cout << "Inside disp1" << endl;
	}
	void disp2()
	{
		cout << "Inside disp2" << endl;
	}
	void disp3()
	{
		cout << "Inside disp3" << endl;
	}
	void disp4()
	{
		cout << "Inside disp4" << endl;
	}
};

class sub :private parent
{
public:

	sub(int k)
	{
		cout << k << endl;
	}

	void disp5()
	{
		cout << "Inside disp5" << endl;
	}

	using parent::disp3;
	using parent::disp1;
};

//make sure u can do the following
int main()
{
	parent p();
	sub s(30);
	s.disp5();
	s.disp3();
	s.disp1();
}
