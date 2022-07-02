#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() { 
    int t;
    long long total, x,y,a,b;
    cin>>t;

    for(int i = 0; i<t;i++)
    {
        cin>>x>>y>>a>>b;
        total = 0;
        
        if(a>b) cout<<a*abs(x-y) + b*min(x,y)<<endl;
        else cout<<min(a*abs(x-y) + b*min(x,y), a*(x+y))<<endl;
        
        
        
    }

    return 0;
}
