#include<iostream>
using namespace std;

class parent{
 int a=5;
 public:

parent(int a){
   this->a=a;
   cout<<"parameterized constructor called"<<endl;
}
 parent(parent &ref){
    cout<<"copy constructor called"<<endl;
    cout<<ref.a;
 }

};

int main(){
    parent obj(10);
    parent obj2(obj);

    return 0;
}