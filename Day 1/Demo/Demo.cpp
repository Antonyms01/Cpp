
#include <iostream>
using namespace std;

void toggle(char* ptr);
int main()
{
	char str[20];
	puts("Enter Your Name:");
	gets_s(str);
	toggle(str);
	cout << str;

}

void toggle(char *ptr)
{
	int i;
	for (i = 0;ptr [i] != '\0'; i++)
	{
		if (ptr[i] >= 65 && ptr[i] <= 90)
			ptr[i] += 32;

		else if (ptr[i] >= 97 && ptr[i] <= 122)
			ptr[i] -= 32;
	}
}
