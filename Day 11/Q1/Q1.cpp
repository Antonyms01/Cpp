//1)	Create a base class Weapon.Declare pure virtual function “void attack()” in it.
//Define following sub classes for this class.A) Gun  b) Sword  c) Rifle
//“Rifle” class will have one more function “Chambering()”.create an array of pointer to Weapon having 
// 3 elements.
//In this array, store  the instances of child classes.
//Traverse the array, find out where exactly “Rifle”  is stored using  RTTI(dynamic_cast), and invoke
//  “Chambering()” function along with “attack()” function.


#include<iostream>
using namespace std;
class Weapon
{
public:
	virtual void attack() = 0;
	
};

class Gun :public Weapon
{
public:
	void attack()
	{
		cout << "Gun" << endl;
	}
};

class Rifle :public Weapon
{
public:
	void attack()
	{
		cout << "Rifle" << endl;
	}

	void chambering()
	{
		cout << "Rifle's Chambering" << endl;
	}
};

class Sword :public Weapon
{
public:
	void attack()
	{
		cout << "Sword" << endl;
	}
};

void fun(Weapon *ptr)
{
	ptr->attack();
	Rifle *g = dynamic_cast <Rifle*>(ptr);
	if (g)
	{
		g->chambering();
	}
}
int main()
{
	Weapon* ptr[] = { new Gun,new Rifle,new Sword };
	for (int i = 0;i < 3;i++)
	{
		fun(ptr[i]);
	}
}