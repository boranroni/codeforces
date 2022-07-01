#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() { 
    int a,b = 1;
    cin>>a;


    while(a/2)
    {
        if(a % 2 == 1) b++;

        a/= 2;
    }
    


    cout<<b<<endl;
    return 0;
}
