

//Above code is incomplete.
//Make sure that all the member functions of "Second" will access "a".

#include<iostream>
using namespace std;


class First
{
	int a=10;
	friend class Second;
	
};
class Second
{
public:
	void fun1() {}
	void fun2() {}
	void fun3() {}

	void fun1(First&);
	void fun2(First&);
	void fun3(First&);

	
};

void Second::fun1(First &ref)
{
	cout << ref.a << endl;
}


void Second::fun2(First& ref)
{
	cout << ref.a << endl;

}


void Second::fun3(First& ref)
{
	cout<<ref.a<<endl;

}


int main() 
{
	First f1;
	Second s1;
	s1.fun1(f1);
	s1.fun2(f1);
	s1.fun3(f1);

}