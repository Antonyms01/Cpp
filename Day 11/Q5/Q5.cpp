//5)	Create a base class “StorageDevice”.Declare  pure virtual function           
//   “void store()” in it.Define following sub classes for this class.A) HardDisk b) CD
//  c) PenDrive.
//define  “store()” in these classes.
//
//now write a global function "perform()" which will accept "StorageDevice class reference" 
// as an argument.In this function using RTTI invoke  "store()" method of  only “PenDrive”.
// [handle bad_cast exception]
//
//From main function try to call “perform()” function by passing various child classes.


#include<iostream>
using namespace std;

class StorageDevice
{
public:
	virtual void store() = 0;
};

class HardDisk :public StorageDevice
{
public:
	void store()
	{
		cout << "HDD Storage" << endl;
	}
};

class CD :public StorageDevice
{
public:
	void store()
	{
		cout << "CD Storage" << endl;
	}
};

class PenDrive :public StorageDevice
{
public:
	void store()
	{
		cout << "PenDrive Storage" << endl;
	}
};

void perform(StorageDevice& ref)
{
	try
	{
		PenDrive& p = dynamic_cast<PenDrive&>(ref);
		ref.store();
	}
	catch (bad_cast b)
	{
		cout << b.what() << endl;
	}
}

int main()
{
	//StorageDevice* ptr[3] = { new HardDisk,new CD,new PenDrive };
	/*StorageDevice* (&ref)[3] = ptr;
	for (int i = 0;i < 3;i++)
	{
		perform(*ref[i]);
	}*/
	HardDisk d;
	CD c;
	PenDrive p;
	perform(d);
	perform(c);
	perform(p);
	
}