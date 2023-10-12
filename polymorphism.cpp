#include <iostream>
using namespace std;

class parent
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    string add(string a, string b)
    {
        return a + b;
    }

    void operator+()
    {
        cout << "+ functionality changed" << endl;
    }
    virtual void show()
    {
        cout << "parent function";
    }
};

class child : public parent
{
public:
    void show()
    {
        cout << "show function overrided in child class";
    }
};

int main()
{
    parent obj;
    cout << obj.add(2, 3) << endl;
    cout << obj.add("simar", "preet") << endl;
    +obj;

    child obj2;
    obj2.parent::show(); // one way to function oveerride
    cout << endl;
    // now this thing is called runtime polymorphism using virtual functions for function overriding
    //,simple function oveerriding is not polymorphism , concept clear;
    parent *objpoint = &obj2; // second way , pointer of base class and object of child class
    objpoint->show();

    return 0;
}