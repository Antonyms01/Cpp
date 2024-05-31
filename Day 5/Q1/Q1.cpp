
//write a friend function, which will create a  new string containing str1, 
// str2 and also display it.


#include<iostream>
using namespace std;

class Second;
class First;

class First
{
public:
    char str1[20] = "Hey";
    
    void display( First&, Second&);
};

class Second
{
public:
    char str2[20] = "!!!";
    
    friend void First::display( First&, Second&);
};



void First::display(First& ref1,Second& ref)
{
    char concat[20];
    strcpy_s(concat, ref1.str1);
    strcat_s(concat, ref.str2);
    cout << concat << endl;
}


int main()
{
    First f1;
    Second s1;
    f1.display(f1,s1);
}