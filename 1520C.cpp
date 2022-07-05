#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    int t, n;
    cin>>t;
    while (t--)
    {
    cin>>n;
    if(n==2)
    {
        cout<<-1<<endl;
        continue;
    }
    int sq = n*n;
    int count = 0;
    for(int i = 1; i<=sq; i+=2)
    {
        //odd numbers
        cout<<i<<" ";
        count++;
        if(count == n)
        {
            count = 0;
            cout<<endl;
        }


    } 
    
    for(int i = 2; i<=sq; i+=2)
    {
        //odd numbers
        cout<<i<<" ";
        count++;
        if(count == n)
        {
            count = 0;
            cout<<endl;
        }


 
    }
    


    }
    return 0;
}
