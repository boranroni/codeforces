#include <iostream>
using namespace std;
#include <string>
int main() {
    string s;
    int cap = 0, low = 0;
    cin>>s;
    
    for(int i = 0; i<s.size() ;i++)
    {
        if(s[i]>= 97) low++;
        else cap++;
    }

    if(low>=cap)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<97) 
                cout<<(char)(s[i]+32);
            else cout<<s[i];
        }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=97) cout<<(char)(s[i]-32);
            else cout<<s[i];
        }
 
    }

    return 0;
}
