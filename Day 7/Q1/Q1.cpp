//write a program to convert minutes to hours.
//(Use operator= for conversion.)

#include<iostream>
using namespace std;
class Hour
{
private:
	int hr;
public:

	Hour()
	{

	}

	Hour(int x)
	{
		this->hr = x;
	}

	void disp()
	{
		cout << "Hour:\t" << hr << endl;
	}

};

class Minute
{
private:
	int mnt;
public:
	Minute(int x)
	{
		this->mnt = x;
	}
	void disp()
	{
		cout << "Minute:\t" << mnt << endl;
	}

	operator Hour()
	{
		return Hour(this->mnt / 60);
	}
};

int main()
{
	Hour h1;
	Minute m1(300);
	//h1.disp();
	m1.disp();
	h1 = m1;
	h1.disp();

}

