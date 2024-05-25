//1) class Number
//{
//    int num;
//   }
//In the main function,
//Number n1(8), n2(4), n3(20), n4(6), n5;
//n5 = n1 - n2
//n5 = n3 / n4;
//n5 = n1 * n3

#include<iostream>
using namespace std;

class Number
{
	int num;

public:
	Number()
	{

	}
	Number(int k)
	{
		this->num = k;
	}

	Number operator-(Number& ref)
	{
		return Number(num - ref.num);
	}

	Number operator/(Number& ref)
	{
		return Number( num / ref.num);
	}

	Number operator * (Number& ref)
	{
		return Number( num * ref.num);
	}

	void display()
	{
		cout << num << endl;
	}
};

int main()
{
	Number n1(8),n2(4),n3(20),n4(6),n5;
	n1.display();
	n2.display();
	n5 = n1 - n2;	//n1.operator-(n2);//8-4=4
	n5.display();

	n5 = n3 / n4;
	n5.display();

	n5 = n1 * n3;
	n5.display();

	
}