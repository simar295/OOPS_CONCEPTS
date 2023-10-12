#include <iostream>
using namespace std;

class overide{
    public :
    void virtual print(){
        cout<<"override class";
    }
};
class overided : public overide{
    public :
    void print(){
        cout<<"overrided2 class";
    }
};

//INHERITENCE AMBIQUITY 
class shape
{
public:
    int a = 5;
};

class box : virtual public shape
{
public:
};

class circle : virtual public shape
{
public:
};

class endd : public box, public circle
{
public:

};

class car
{
public:
    int a = 0;
    int b = 1;
    static int c;

    car()
    {
        a = 4;
        b = 6;
    }

    void printfunction()
    {
        cout << "hello world";
    }
    void printfunction(int a)              //function overloading
    {
        cout << "overloaded " << a;
    }
    void operator-()
    {
        cout << "i am subtraction operator"; // operator overloading
    }
};

int car::c = 8; // initialize static members

int main()
{
    endd obj2;
    car obj;


    cout << obj.a << endl;
    cout << obj.b << endl;
    obj.printfunction();
    cout << endl;
    obj.printfunction(3);
    cout << endl;
    cout << obj.c;
    cout << endl;
    -obj;
    cout << endl;
    cout << obj2.a;
    cout << endl;
    overided obj3;
    overide *p=&obj3;  //ACHIEVING LATE BINDING IN FUNCTION OVERRIDING
    p->print();




    return 0;
}