//4)	Create a base class Cricket.Declare pure virtual function �void play()� in it.
//Define following sub classes for this class.A) FiftyOver  b) Test  c) TwentyOver
//�Test� class will have one more function �daywise_summary()�.
//Create an array of pointer to �Cricket� class having 3 elements.Store child class objects into
//  this array.
//Now using  using  RTTI, find out where is  �Test�, and call �daywise_summary()�  along with 
// �play()� function.


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
		cout << "Test" << endl;
	}

	void summary()
	{
		cout << "Summary" << endl;
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

void run(Cricket* ptr)
{
	ptr->play();
	
	
		Test* t = dynamic_cast<Test*>(ptr);
		if (t)
		{
			t->summary();
		}
}

int main()
{
	Cricket *ptr[3] = { new FiftyOver,new Test,new TwentyOver };
	for (int i = 0;i < 3;i++)
	{
		run(ptr[i]);
	}

}