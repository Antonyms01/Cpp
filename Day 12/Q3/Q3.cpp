//3) Write a class template, which can take 3 different type of arguments and print them.
//a class must have only one constructor and that is a constructor which will take 3 arguments.
//class must have disp function which will display the data.


#include<iostream>
using namespace std;

template<class type1,class type2,class type3>
class demo
{
private:
	type1 a;
	type2 b;
	type3 c;
public:
	demo(type1 a, type2 b, type3 c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void disp()
	{
		cout << a << endl << b << endl << c << endl;	
	}
};

int main()
{
	demo<int, float, double> d1(20, 78.27f, 59.31);
	d1.disp();

}