#include<iostream>
using namespace std;


void disp()
{

}
int main()
{
	int a = 20, b = 100;
	int& n = a;
	n = a++;
	n = b;
	cout << a << n << endl;
}

