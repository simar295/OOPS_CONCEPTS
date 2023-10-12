#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

class parent{
    public:
    int x;
    int name;
    static int statt;
    

    parent(){
        statt=7;
    }

  /*   parent(){
        cout<<"constructor called : ";
        x=7;
    } */
    void putdata(){
        cout<<"enter name";
        cin>>name;
        
    }
    void getdata(){
        cout<<name<<endl;
    }
};

int parent::statt;

int main(){
    parent obj;
    cout<<obj.x<<endl;
    int a=5;
    int b=10;
    swap(a,b);
    cout<<"value of a : "<<a<<endl<<"value of b : "<<b<<endl;
    int *p= new int(77);
    parent emp[10];

    for(int i=0;i<10;i++){
      emp[i].putdata();
    }
    
    for(int i=0;i<10;i++){
      emp[i].getdata();
    }
   
    cout<<*p<<endl;
    cout<<obj.statt;

    return 0;
}