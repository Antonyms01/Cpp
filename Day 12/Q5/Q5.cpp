//5) define a class "Emp" with "private int data=100"
//write a function template, which can accept anything as an argument and display it.
//It can also accept "Emp" class object as an argument and display it
//(Hint :-insertion operator overloading)


#include<iostream>
using namespace std;

class Emp
{
	int data = 100;
	
	public:
		template<class type>

		
		void disp(type ref) 
		{
			cout << ref<< endl;
		}
	
		friend ostream& operator<<(ostream&,  Emp&);

};

ostream& operator<<(ostream &o, Emp &ref1)
{
	o << ref1.data << endl;
	return o;
}

int main()
{
	Emp e;
	Emp e1;
	e.disp(e);
	e1.disp(15);
	e1.disp(45.20);
	e1.disp(98.2f);
}