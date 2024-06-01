//6) define a function template which can take any type of pointer as an argument and by dereferencing it, display the data.
// Now overload this function template, for int pointer.
//Call these functions(function templates and normal function) from main by passing address of various different variables.

#include<iostream>
using namespace  std;

template<class t>
void disp(t* p)
{
	cout << "Inside disp\t" <<*p<< endl;
	
}

void disp(int* p)
{
	cout << "Inside int*fun" << endl;
	cout << *p << endl;
}


int main()
{
	int num = 100;
	char ch = 'S';
	double d = 8.44;
	disp(&num);
	disp(&ch);
	disp(&d);
	
}