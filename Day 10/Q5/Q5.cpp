//5) create an abstract class Shape with
//virtual void display()
//{
//	cout << "display on the canvas" << endl;
//}
//and
//pure virtual function(contract) void draw()
//functions.
//
//now derive 3 classes from Shape
//Circle, Triangle and Rectangle
//in the main function create array of pointer to Shape class and store all the child class objects
//  addresses inside it.Traverse the array and invoke "display()" and "draw()" functions.
//


#include<iostream>
using namespace std;
class Shape
{
public:
	virtual void display()
	{
		cout << "display on the canvas" << endl;
	}

	virtual void draw() = 0;
};

class Circle :public Shape
{
public:

	void draw()
	{
		cout << "Circle drawn" << endl;
	}

};

class Triangle :public Shape
{
public:
	void draw()
	{
		cout << "Triangle drawn" << endl;
	}

};

class Rectangle :public Shape
{
public:
	void draw()
	{
		cout << "Rectangle drawn" << endl;
	}

};

int main()
{
	Shape* ptr[3] = { new Circle,new Triangle,new Rectangle };
	for (int i = 0;i < 3;i++)
	{
		ptr[i]->display();
		ptr[i]->draw();
	}
}
