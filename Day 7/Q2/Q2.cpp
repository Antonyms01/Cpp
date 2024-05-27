//2)write a number class with
//int num;
//void disp() {}
//
//u should be able to do following
//
//number n1(20);
//int k = -n1;
//
//n1 += 5;
//n1.disp()
//
//number n2(35);
//if (n1 != n2)
//{
//	some message
//}
//
//
//
//number n3(12);
//
//if (n3 < n1)
//{
//	some message
//}
//
//number n4;
//
//n4 = n2 * n3;

#include<iostream>
using namespace std;

class number
{
private:
	int num;

public:
	number(int k) 
	{
		this->num = k;
	}

	number()
	{

	}

	
	int  operator-()
	{
		return -num;
	}
	/*operator int()
	{
		return -num;
	}*/
	
	void  operator +=(int k)
	{
		cout<<"n1:\t"<<this->num + k << endl;
	}

	bool  operator !=(number& ref)
	{
		return  (this->num != ref.num);
	}

	bool operator <(number& ref)
	{
		return (this->num < ref.num);
	}

	number operator *(number &ref)
	{
		return this->num * ref.num;
	}

	void display()
	{
		cout << num << endl;
	}
};


int main()
{
	number n1(20);
	number n2(35);
	number n3(12);
	number n4;
	int k =-n1;	//-20
	cout << "k:\t" <<k<< endl;
	n1 += 5;	//n1=n1+5	//n1.operator+=(5)
	
				//n1.operator !=(n2)
	if (n1 != n2)
	{
		cout << "Equals" << endl;
	}
	else
	{
		cout << "Not Equals" << endl;
	}
	
	if (n3 < n1)
	{
		cout << "n3 is less than n1" << endl;
	}
	else
	{
		cout << "n3 is greater than n1" << endl;
	}
	
	n4 = n2 * n3;
	n4.display();

	
}