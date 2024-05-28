//2)
//Create a base class FourWheeler.Declare pure virtual function “void start()” in it.
//Define following sub classes for this class.
//A) Qualis b) Sumo c) Volvo
//Define “start” function in these classes.In main function, create array of pointer to 
// FourWheeler which will contain objects of these three sub classes.
//Now traverse the array and call all the child class methods.

#include<iostream>
using namespace std;
class FourWheeler
{
public:
	virtual void start() = 0;
};


class Qualis :public FourWheeler
{
public:
	void start()
	{
		cout << "Start Qualis" << endl;
	}
};

class Sumo :public FourWheeler
{
public:
	void start()
	{
		cout << "Start Sumo" << endl;
	}

};

class Volvo :public FourWheeler
{
public:
	void start()
	{
		cout << "Start Volvos" << endl;
	}

};

int main()
{
	 FourWheeler *ptr[3] = { new Qualis,new Sumo,new Volvo };
	 for(int i = 0;i < 3;i++)
	 {
		 ptr[i]->start();
	 }
}