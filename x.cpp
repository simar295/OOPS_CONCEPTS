#include<bits/stdc++.h>
using namespace std;

int main(){

    vector <int> arr={3,0,1};

    int digitsum=0;

    int n= sizeof(arr)/sizeof(arr[0])-1;

     for (int i = 0; i <= n; i++)
    {
        digitsum=digitsum+arr[i];
        
    } 
     int ans = digitsum-n;
     cout<<ans;
}

//013