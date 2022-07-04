#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    int n;
    cin>>n;

    if(n == 0) cout<<1<<endl;
    else if (n%4 ==1) cout<<8<<endl;

    else if (n%4 ==2) cout<<4<<endl;
    else if (n%4 ==3) cout<<2<<endl; 
    else cout<<6<<endl;
 
 /* 1 8   
    2 4
    3 2
    4 6
    5 8*/


    
    return 0;
}
