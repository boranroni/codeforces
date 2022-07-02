#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() { 
    int n, m, res = 0;
    cin>>n>>m;

    if(m>n) cout<<-1<<endl;
    else
    {
        if(n%2) res = n/2+1;
        else res = n/2;


        while(res%m>0) res++;


        cout<<res<<endl;
    }

    return 0;
}
