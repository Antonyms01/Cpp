#include <iostream>
using namespace std;

class base
{
public:

	base()
	{

	}

	
};
class sub :public base
{
public:
	sub()
	{

	}
	sub(int k)
	{
		cout << k << endl;
	}

	sub(char a, int k)
	{
		cout << a << endl;
		cout << k << endl;
	}
};

//Following statements should be possible

int main()
{
	sub s;

	sub* s1 = new sub(40);

	sub* s2 = new sub('a', 4.5);


}
