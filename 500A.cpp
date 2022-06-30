#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() { 
    int n, t;
    bool transport = false;
    cin>>n>>t;
    int portal[n+1];
    

    for (int i = 1; i<n;i++) cin>>portal[i];  

    int cCell = 1;
    for(int k = 1; k<n;k++)
    {

        
        if (cCell == t)
        {
            transport = true;
            break;
        }
        else
        {
            cCell += portal[cCell];
        }
    }
    
    
    if (transport || cCell == t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
