//1) create a class with constructors and destructors.
//create array of instances and observe how program behaves.

#include<iostream>
using namespace std;

	
class demo
{
private:

	int num;

public:
	demo()
	{
		cout << "Inside Default Constructor !!!"<<endl;
	}

	demo(int k)
	{
		cout << "Inside param Constructor !!!" << endl;
		this->num = k;
	}

	

	void disp()
	{
		cout << num << endl;
	}

	~demo()
	{
		cout << "Inside Destructor!!! \t "  <<num << endl;
		
	}
};
int main()
{
	demo *d = new demo(50);
	d->disp();


	demo *ptr[3];
	ptr[0] = new demo(7);
	ptr[1] = new demo(6);
	ptr[2] = new demo(5);

	for (int i = 0;i < 3;i++) {
		ptr[i]->disp();
	}

	
	for (int i = 0;i < 3;i++) {
		delete ptr[i];
	}
	delete d;
}