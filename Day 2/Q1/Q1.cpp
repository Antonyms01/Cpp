//1) using cin and cout, accept name, address, age of a person and print it.


//#include<iostream>
//using namespace std;
//int main()
//{
//	char name[20];
//	int age;
//	char add[20];
//	cin >> name >>age >>add;
//	cout << "Name:"<<name << endl << "Age:" << age << endl << "Address:" << add;
//
//}



//2) create following structure
//struct book
//{
//	char bid[5];
//	char name[30];
//	int price;
//};
//ask user how many records he wants to create and accordingly allocate memory.
//accept values from user and display.
//(Hint :-use  "new" operator)
//



//#include<iostream>
//using namespace std;
//struct book
//{
//	char bid[5];
//	char name[30];
//	int price;
//};
//
//
//int main()
//{
//	struct book *ptr;
//	int length;
//	cout << "Enter Length:";
//	cin >> length;
//	 ptr = new book[length];
//	 for (int i = 0;i < length;i++)
//	 {
//		 cin >>ptr[i].bid>> ptr[i].name >> ptr[i].price;
//
//	 }
//
//	 for (int i = 0;i < length;i++)
//	 {
//		 cout << ptr[i].bid<<endl<< ptr[i].name<<endl << ptr[i].price<<endl;
//
//	 }
//
//}








//3) create a structure "Employee"
//with members
//int id
//char name[20];
//char desig[20];
//now access it using
//a) array
//b) DMA


//#include<iostream>
//using namespace std;
//struct emp
//{
//	int id;
//	char name[20];
//	char desig[20];
//
//};
//
//int main()
//{
//	struct emp *ptr;
//	ptr = new emp;
//	for (int i = 0;i < 2;i++)
//	{
//		cin >> ptr[i].id >> ptr[i].name >> ptr[i].desig;
//	}
//
//	for (int i = 0;i < 2;i++)
//	{
//		cout << ptr[i].id<<endl << ptr[i].name<<endl << ptr[i].desig<<endl;
//	}
//}

