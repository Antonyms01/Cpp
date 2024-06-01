//function with 2 generic types
#include<iostream>
using namespace std;
class MyClass
{
private:
	int num;
public:
	MyClass(int k)
	{
		num = k;
	}
	// do something
	
	MyClass operator+(int k)
	{
		return MyClass(this->num + k);
	}

	friend MyClass operator+(int k, MyClass& ref);

	friend ostream& operator<<(ostream& o,  MyClass& ref);

	int operator+(MyClass& ref)
	{
		return this->num + ref.num;
	}
};

MyClass operator+(int k,  MyClass& ref)
{
	return k + ref.num;
}

ostream& operator<<(ostream& o,  MyClass& ref)
{
	o << ref.num << endl;
	return o;
}


template <class type1, class type2>
void add(type1 a, type2 b)
{
	cout << endl << a + b << endl;
}
void main()
{
	add(20, 7.8);
	add('A', 4.5);
	add(34.30, 12);
	add(20, 30);
	MyClass m1(20);
	MyClass m2(100);
	add(m1, 50);		//m1.operator+(int k)//20+50=70
	add(40, m1);		//operator+(int k,Myclass &ref)
	add(m1, m2);		//m1.operator+(m1)
	add(m1, m1);
}

































