//// in the following code, invoke "disp1" from  "disp2" 
#include<iostream>
using namespace std;




// in the following code, invoke "disp2" from  "disp1" 

class two;

class two
{
public:
	void fun2()
	{
		cout << "Maje hi Maje" << endl;
	}

};
class one
{
public:
	void fun1(two& ref)
	{
		cout << "No Maje" << endl;
		ref.fun2();
	}
};





//void one::fun1(two& ref)
//{
//	cout << "No Maje" << endl;
//	ref.fun2();
//}


int main()
{
	one o;
	two t;
	
	o.fun1(t);
}