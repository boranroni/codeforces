#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

 
int main() { 
    int t, n,count,ans = 0;
    string s;
    cin>>t;
    for(int i = 0; i<t;i++)
    {
        cin>>n>>s;
        count = 0;
        ans = 0;
        for(int k=0; k<n;k++)
        {
            if(s[k] == '(' ) count++;
            else count--;
        
            if (count<0)
            {
                ans++;
                count = 0;
 
            } 
                
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
