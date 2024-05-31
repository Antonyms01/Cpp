#include<iostream>
using namespace std;

class gm;
class kg
{
private:
	int num;
public:

	kg()
	{

	}

	kg(int x)
	{
		this->num = x;
	}

	void display()
	{
		cout << "Kg:\t" << num << endl;
	}


	int getkg()
	{
		return num;
	}
	

	
};

class gm
{
private:
	int num1;
public:

	gm()
	{

	}
	gm(int x)
	{
		this->num1 = x;
	}

	void display()
	{
		cout << "Gram:\t" << num1 << endl;
	}

	int getgm()
	{
		return num1;
	}

	operator kg()
	{
		return kg( num1 / 1000);
	}



};



int main()
{
	kg k(5000);
	gm g(10000);
	k.display();
	g.display();
	k = g;
	k.display();
}