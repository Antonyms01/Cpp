//2)write a class template, which can take any generic type display it and return the size of type passed.
//(hint : in this class template write two functions void disp() and int size()).

#include<iostream>
using namespace std;


template<class type, class type1>		//Class template
class demo
{
private:
	type n;
	type1 p;

public:
	demo(type n, type1 p)
	{
		this->n=n;
		this->p = p;
	}
	void disp()
	{
		cout << n <<"\t" << p << endl;
	}
	int size()
	{
		return sizeof(n)+sizeof(p);
	}
};

int main()
{
	demo<int, double>m1(5, 5.2);
	demo<int, char>m2(5, 'm');
	m1.disp();
	cout<<"Size:"<<m1.size() << endl;
	m2.disp();
	cout << "Size:"<<m2.size() << endl;
}