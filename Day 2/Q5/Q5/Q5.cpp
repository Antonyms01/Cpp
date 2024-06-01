
//5)void disp(int); function.
//
//now create a function pointer and call this function using function pointer.*/
//
//
//

//#include<iostream>
//using namespace std;
//void disp(int num)
//{
//	cout << "I'm Here!!!";
//}
//
//int main()
//{
//	
//		void (*ptr)(int);			//Pointer Function
//		ptr = disp;
//		ptr(32);
//		
//}





//6) write a function to swap 2 given numbers using pointers.

//#include<iostream>
//using namespace std;
//void swap(int *x, int *y);
//int main()
//{
//	int x=10;
//	int y=20;
//	swap(&x, &y);
//	cout << "x:" << x << endl << "y:" << y << endl;
//}
//
//void swap(int *x,int *y)
//{
//	*x = *x + *y;
//	*y = *x - *y;
//	*x = *x - *y;
//}




//7) accept from user how many chracters he has in his name, now allocate a memory accordingly and 
// accept his name. [use new operator]


//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	
//	cout << "Count for Name:" << endl;
//	cin >> num;
//	char *ptr = new char[num];
//	cout << "Enter Your NAme:" << endl;
//	cin >> ptr;
//	cout << "Name:" << ptr << endl;
//	
//	
//}





//8) write a function which can accept minimum 3 characters and maximum 5 characters and
//  display them. ( use "default arguments")




//#include<iostream>
//using namespace std;
//
//void disp(char a, char b, char c, char d = 'a', char e = 'b')
//{
//	cout << a << b << c << d << e;
//}
//
//int main()
//{
//	disp('x', 'y', 'z');
//}





//9)write a function which takes 3 arguments
//variable, pointer and a reference.(any datatype)
//invoke this function and show how "call by value", "call by address" and "call by reference" will work.




//#include<iostream>B
//using namespace std;
//void disp(int a, int  *ptr, int &x)
//{
//	cout << "variable:"<<a << endl<<"call by add:" << *ptr << endl<<"call by ref:" << &x << endl;
//}
//
//
//int main()
//{
//	int a = 10;
//	int *ptr = &a;
//	int &ref = a;
//	disp(a,ptr,ref);
//
//}




//10)define 3 different structures and initialize their members.
//now write 3 different functions, but with the same name.
//these functions will accept each structure respectively and display their members.


//#include<iostream>
//using namespace std;
//
//struct one
//{
//	int num;
//	
//};
//
//
//struct two
//{
//	int num;
//	char name[10];
//};
//
//
//struct three
//{
//	int num;
//	char name[10];
//	double a;
//};
//
//void fun(struct one o)
//{
//	struct one *ptr; 
//	cout << o.num<<endl;
//
//}
//
//
//
//void fun(struct two t)
//{
//	struct two *ptr;
//	cout << t.name << endl << t.num << endl;
//}
//
//
//
//void fun(struct three t)
//{
//	struct three *ptr;
//	cout << t.name << endl << t.num << endl <<t.a<<endl;
//}
//
//int main()
//{
//	one o = { 10 };
//	two t = { 20,"SOhan" };
//	three th = {30,"Rohan",52.20};
//
//	fun(o);
//	fun(t);
//	fun(th);
//}