//1) Write a class (not a class template) and inside it create a function template as a member function.
// Invoke it from main function.


#include<iostream>
using namespace std;


class demo
{
public:
	template <class t>				//Function Template
	void function(t k)
	{
		cout << k<<endl;
	}
};

int main()
{
	demo d;
	d.function(10);
	d.function('a');
	d.function(22.56);

}