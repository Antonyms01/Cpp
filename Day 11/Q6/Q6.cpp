//6)	Create a base class “Subject”.Declare pure virtual function “void maxmarks()” in it.
// Define following sub classes for this class.A) Maths b) History c) English.Define “maxmarks”
//  in these classes.In main function, create array of pointer to Subject, which will contain 
// objects of these three sub classes.Using RTTI, find out where is “History” and call its 
// maxmarks() method.


#include<iostream>
using namespace std;

class Subject
{
public:
	virtual void maxmarks()=0;
};

class Maths :public Subject
{
public:
	void maxmarks()
	{
		cout << "Maths Marks" << endl;
	}
};


class History :public  Subject
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

int main()
{
	Subject *ptr[3] = { new History,new Maths,new English };
	
		History* h = dynamic_cast<History*>(ptr[0]);
		h->maxmarks();

	
	
}