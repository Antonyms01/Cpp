//4) same as above except it has to be done using reference of parent class.

#include<iostream>
using namespace std;

class Subject
{
public:
	virtual void maxmarks() = 0;
};

class Maths :public Subject
{
public:
	void maxmarks()
	{
		cout << "Maths Marks" << endl;
	}
};

class History :public Subject
{
public:
	void maxmarks()
	{
		cout << "History Marks" << endl;
	}
};

class English :public Subject
{
public:
	void maxmarks()
	{
		cout << "English Marks" << endl;
	}
};

void show(Subject &ptr)
{
	ptr.maxmarks();
}

int main()
{
	Maths m;
	History h;
	English e;
	show(m);
	show(h);
	show(e);
}