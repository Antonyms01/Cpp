#include<iostream>
using namespace std;
int main()
{
	/*char name[100];
	cout << "Enter Name: " << endl;
	cin >> name;
	for (int i = 0; name[i] != '\0'; i++)
	{
		if (i == 0)
		{
			name[i] = ' ';
		}
		
		if (name[i + 1] == '\0')
		{
			name[i] = ' ';
		}
		cout << name[i];
	}*/


	

	
		int* fun();
		int* ptr, i;
		ptr = fun();
		for (i = 0; i < 4; i++)
		{
			printf("%d\n", ptr[i]);
		}
	}
	int* fun()
	{
		int arr[4] = { 10,20,30,40 };
		return arr;
	}

