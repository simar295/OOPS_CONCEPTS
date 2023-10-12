#include <iostream>
using namespace std;

void swaped(int &a, int &b)
{   // reference taken , not actual para
    // pointing to same addresss
    swap(a, b);
}

int main()
{

    int a = 5;
    int b = 10;
    swaped(a, b);
    cout << a << " " << b << endl;

    return 0;
}