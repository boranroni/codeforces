#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() { 
    int n, x;
    int count = 0;
    cin>>n>>x;


    for(int i = 1; i<=n;i++)
    {
        if(x%i == 0 && x/i <= n)
            count++;
    }

    cout<<count<<endl;
    return 0;
}
