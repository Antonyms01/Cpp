//4) Write a class template, which can take 3 different type of arguments.Do not define any constructor for this class template.
//class must have 3 setter methods and 3 getter methods.


#include<iostream>
using namespace std;

template<class type1, class type2, class type3>

class demo
{
	type1 a;
	type2 b;
	type3 c;

public:
	
	void setA(type1 a)
	{
		this->a = a;
		
		
	}

	type1 getA()
	{
		return a;
	}

	void setB(type2 b)
	{
		this->b = b;
	}

	type2 getB()
	{
		return b;
	}

	void setC(type3 c)
	{
		this->c = c;
	}

	type3 getC()
	{
		return c;
	}
};

int main()
{
	demo <int,double,float>d1;
	d1.setA(20);
	cout << d1.getA()<<endl;
	d1.setB(55.23);
	cout << d1.getB()<<endl;
	d1.setC(45.22f);
	cout << d1.getC();	
}