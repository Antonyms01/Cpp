#include<iostream>
using namespace std;
int main()
{
	char ch[20] ;

	cin >>ch ;
	char *ptr = ch;
	ptr++;
	for (int i = 0; ptr[i] != '\0';i++)
	{
		if (ptr[i+1] == '\0')
		{
			ptr[i]  = ' ';
		}
	}
	cout << ptr;
}