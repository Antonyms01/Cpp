//2) class sample
//{
//private:
//	char ch;
//public:
//	sample(char ch)
//	{
//		this->ch = ch;
//	}
//  };
//
//given above class.
//
//write a global function "display" which will access "ch" directly and
//  display it.
//call this function from main function.

#include<iostream>
using namespace std;
class sample
	{
	private:
		char ch;
	public:
		sample(char ch)
		{
			this->ch = ch;
		}

		void display();			
  };

void sample::display()		
{
	cout << ch << endl;			//here we can access private member 'ch' because 
								//display method is define inside same class
}

int main()
{
	sample s1('s');
	s1.display();
}