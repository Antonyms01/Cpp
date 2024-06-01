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
	friend int operator+(int, MyClass&);

	MyClass operator+(MyClass& ref)
	{
		return MyClass(ref.num + this->num);
	}
	friend ostream& operator<<(ostream&, const MyClass& );

};

int operator+(int k, MyClass& ref)
{
	return k + ref.num;
}

ostream& operator<<(ostream& o, const MyClass& ref)
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
	add(m1, 50);		//m1.operator+(50)//20+50=70
	add(40, m1);		//operator+(k,m1);
	add(m1, m1);		//m1.operator+(m1);
}

































