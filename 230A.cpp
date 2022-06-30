#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() { 
    int s, n, x, y, i;
    cin>>s>>n;
    bool win = true;
    pair <int, int> dragons[n];


    for (i = 0; i<n;i++)
    {
        cin>>dragons[i].first>>dragons[i].second;
    }
    sort(dragons, dragons+n);


    for(i=0; i<n;i++)
    {
        if(s>dragons[i].first){
            
            s+= dragons[i].second;

        }
        else
        {
            win=false;
            break;
        
        }
    }
    
    if(win) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
