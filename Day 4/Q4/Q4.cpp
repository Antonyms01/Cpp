//4) create a class.
//accept from user, how many instances are required.
//Accordingly create array of instances dynamically.
//Now make sure that u call destructor for each and every instances.

#include<iostream>
using namespace std;
class myclass
{
public:
	string name;
	int num;

	~myclass()
	{
		cout << "Inside destructor !!!";
	}
};


int main()
{
	myclass *ptr;
	int size;
	cout << "Size of array:" << endl;
	cin >> size;
	ptr = new myclass[size];
	int i;
	for ( i = 0;i < size;i++)
	{
		cin >> ptr[i].name>>ptr[i].num;
	}

	for ( i = 0;i < size;i++)
	{
		cout << ptr[i].name <<endl<< ptr[i].num<<endl;
	}
	delete[] ptr;
	
	
}