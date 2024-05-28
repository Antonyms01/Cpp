//1)
//class course
//{
//	//here
//};
//class DacCourse :public course
//{
//	// here
//};
//
//you should be able to say following
//
//course* c = new course;
//c->fees(); // course version should be called
//c = new DacCourse;
//c->fees();  // DacCourse version should be called


#include<iostream>
using namespace std;

class Course
{
public:
	//virtual void fees() = 0;
	virtual void fees()
	{
		cout << "Tumse na bhari jayegi" << endl;
	}
};

class DacCourse :public Course
{
public:
	void fees()
	{
		cout << "Na bhai na" << endl;
	}
};

int main()
{
	Course* c = new Course;
	c->fees(); // course version should be called
	c = new DacCourse;
	c->fees();
}