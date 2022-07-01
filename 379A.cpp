#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() { 

    int a,b, c;
    cin>>a>>b;
    int light = a;

    
    while(a)
    {
        light += a/b;
        
        c = (a/b)+ (a-(a/b)*b);
        if (a == c) break;
        else a = c;
        
        
    }
    
    cout<<light<<endl;
    return 0;
}
