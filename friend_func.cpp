#include <iostream>
using namespace std;

class parent
{
private:
  int a;

public:
  friend class freind;
  friend int getdata(parent); // declaring friend function and passing current class reference
};

class freind
{
public:
  void show()
  {
    cout << "i am freind class" << endl;
  }
  void fclass(parent obj)
  { // can access whole parent class from object of parent class
    obj.a = 10;
    cout << "friend class modified the parent class " << obj.a;
  }
};

int getdata(parent takeobj)
{ // defining friend function which is taking (object) of that class
  takeobj.a = 5;
  cout << takeobj.a << endl;
}

int main()
{
  parent obj;
  freind obj2;
  getdata(obj); // calling the friend function and passing the (object) to function.
  obj2.show();
  obj2.fclass(obj);
  return 0;
}