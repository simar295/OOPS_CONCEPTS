#include<iostream>
using namespace std;

class parent{
   int a=5;
public:
   void show(){
    cout<<"parent class called through child object";
   }

};

class sibling1:public virtual parent{
    int a=10;
public:
   void s1(){
    cout<<"parent2 class called through child object";
   }
};
class sibling2:public virtual parent{
    int a=10;
public:
   void s2(){
    cout<<"parent2 class called through child object";
   }
};


class child:public sibling1,public sibling2{
         
};

int main(){
    child obj;
    obj.show();
 

    return 0;
}