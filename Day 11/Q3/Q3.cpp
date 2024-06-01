//3)	Create a base class Cricket.Declare pure virtual function “void play()” in it.
//Define following sub classes for this class.A) FiftyOver  b) Test  c) TwentyOver
//“Test” class will have one more function “daywise_summary()”.create a global function “void doit()
//  which accepts reference of type Cricket so that it can invoke “play()” function polymorphically.
// Inside this function find out where exactly where “Test” is stored using  RTTI(dynamic_cast), and
//  invoke “daywise_summary()” function along with “play()” function.[handle bad_cast exception]


#include<iostream>
using namespace std;

class Cricket
{
public:
	virtual void play() = 0;

};

class FiftyOver:public Cricket
{
public:
	void play()
	{
		cout << "50-50" << endl;
	}
};

class Test :public Cricket
{
public:
	void play()
	{
		cout << "Never Ending" << endl;
	}

	void daywise_summary()
	{
		cout << "Summary"<<endl;
	}
};

class TwentyOver :public Cricket
{
public:
	void play()
	{
		cout << "20-20" << endl;
	}
};

void doit(Cricket &ref)
{
	ref.play();
	try
	{
		Test& t = dynamic_cast<Test&>(ref);
		t.daywise_summary();
	}
	
	catch (bad_cast& b)
	{
		cout << b.what() << endl;
	}
}

int main()
{
	Cricket *ptr[3] = {new FiftyOver,new Test,new TwentyOver};//Cricket *(&ptr)= { new FiftyOver,new Test,new TwentyOver };
	Cricket *(&ref) [3] = ptr;
	for (int i = 0;i < 3;i++)
	{
		doit (*ref[i]);
	}

}