//1) store value 20 inside "num" variable.
//create a pointer to this variable.print the value of "num" using pointer.
//increment the pointer by 2 and show with the diagram what happens.


//#include <iostream>
//using namespace std;
//int main()
//{
//
//    int num1 = 20;
//    int *ptr = &num1;
//    cout << *ptr;
//    *ptr+=2;
//    cout << "\n";
//    cout << *ptr;
//
//}



//2) accept two numbers from the user and with the help of pointers perform following arithmetic operations :
//+-*/
//[diagram compulsory]

//#include <iostream>
//using namespace std;
//int main()
//{
//	int x, y;
//	int* ptr1;
//	int *ptr2;
//	cout << "Enter Two Num:";
//	cin >> x;
//	cin >> y;
//	ptr1 = &x;
//	ptr2 = &y;
//
//	 cout << "Addition:" << * ptr1 + *ptr2;
//	 cout << "\nSubtraction:" << * ptr1 - *ptr2;
//	 cout << "\nDivision:" << * ptr1 / *ptr2;
//	 cout << "\nMultiplication:"<< * ptr1 * *ptr2;
//
//
//}


//
//3) accept two numbers and swap them without using third variable.


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int x;
//	int y;
//	cout << "Enter 2 Num:";
//	cin >> x;
//	cin >>	y;
//	x = x+y;				//5+10=15
//	y = x-y;				//15-10=5
//	x = x-y;				//15-5=10
//	cout << "Swapping of x:" << x;
//	cout << "\nSwapping of y:" << y;
//
//}




//4) write "Call By Address" program [ using pointer ]
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num = 10;
//	void disp(int* ptr);
//	disp(&num);
//
//}
//
//void disp(int *ptr)
//{
//	cout << *ptr;
//}



//5) Given
//void disp(int, int*);
//write a program to define above function and invoke it.


//#include<iostream>
//using namespace std;
//int main()
//{
//	void disp(int x, int *y);
//	int arr[] = { 10,20,30 };
//	int size = sizeof(arr);
//
//	disp(size, arr);
//}
//
//void disp(int ptr, int *y)
//{
//	
//
//	for (int i = 0;i < 3;i++)
//		cout << y[i] << "\n";
//
//	cout << ptr;	//Size
//
//		
//
//}



//
//6) given
//int num = 100;
//int* ptr = &num;
//++(*ptr);
//cout << num << endl;
//(*ptr)++;
//cout << num << endl;
//*(ptr++);
//cout << num << endl;
//
//show with the help of diagram what happens in the above code

//#include<iostream>
//
//using namespace std;
//int main()
//{
//	int num = 100;
//	int* ptr = &num;
//	++(*ptr);					//101
//	cout << num << endl;
//	(*ptr)++;					//102
//	cout << num << endl;
//	*(ptr++);					//102
//	cout << num << endl;
//}





//7) Given following functions :
//void disp1(int k);
//int disp2(char*);
//void disp3();
//double* disp4(char ch);
//
//declare "pointer to functions" for the above functions.


//#include<iostream>
//using namespace std;
//void disp1(int k);
//int disp2(char*);
//void disp3();
//int main()
//{
//	
//	//double disp4(char ch);
//
//	int k = 10;
//	char a = 'c';
//	int* ptr = &k;
//	disp1(*ptr);
//
//}
//
// void disp1(int *ptr)
//{
//	cout << *ptr;
//}




//ask user how many numbers he would like to store
//and using DMA allocate the memory for the same[diagram compulsory]

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "Enter How Much Number You Want To Enter:";
//		cin >> n;
//
//		int *arr = new int[n];
//
//		if (arr == 0)
//			cout << "Arr is EMpty";
//		else
//			cout << "Arr is Created";
//
//		return 0;
//}
//





//9) given
//int arr[] = { 10,20,30,40,50 }
//
//write a function which can accept above array inside the pointer and using for loop traverse it.


//#include<iostream>
//using namespace std;
//int main()
//{
//	void disp(int *ptr);
//	int arr[] = { 10,20,30,40,50 };
//	disp(arr);
//
//}
//
//void disp(int *ptr)
//{
//	//int i;
//	/*for (i = 0;i < 5;i++)
//	{
//		cout << ptr[i];
//		cout << "\n";
//	}*/
//	 
//				//or//
//	int i = 0;
//	while (i < 4)
//	{
//		cout << ptr[i];
//		cout << "\n";
//		i++;
//	}
//}




//10) given
//char name[20] = "Computer"
//
//now declare a pointer to the above string and increment the pointer in such a way that when you
//display the string using pointer, it should display "puter"

//#include <iostream>
//using namespace std;
//int main()
//{
//	char name[20] = "Computer";
//	char* ptr = name + 3;
//	cout << "String in *ptr:" << ptr;
//
//}



//11) accept a name, display it.Now change first and the last characters of the name with their next 
// characters and again print it.
//e.g
//name is "sachin"
//output should be "tachio"


//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch[] = "Sachin";
//
//	cout << strlen (ch);
//	int len = strlen(ch);
//	if (len >= 2) {
//		ch[0] = ch[0] + 1;
//		ch[len - 1] = ch[len - 1] + 1;
//	}
//	cout << "\n"<<ch;
//}



//12) accept a name and print its length without using in built (strlen) function.

//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch[] = "Sohan";
//
//	int count = 0;
//		while(ch [count]!='\0')
//		{
//			count++;
//		}
//		cout << count;
//}




//void disp(int,int*);
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	void disp(int x, int* y);
//	int x = 10;
//	int y = 20;
//	disp(x, &y);
//}
//
//void disp(int x, int *y)
//{
//	cout << x;
//	cout <<"\n"<< * y;
//	
//}



#include <iostream>
using namespace std;
int main()
{
    int num1 = 10;
    int num2 = 20;
    void swap(int*, int*);
    swap(&num1, &num2);
    //cout << "Hey \n";
    cout << num1 << "\n" << num2;
}

void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}