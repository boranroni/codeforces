#include <iostream>
using namespace std;
#include <string>
 
 
int main() { 
    string s;
    cin>>s;
    string ans = "NO";
    for(int i = 0; i<s.length();i++)
    {
        if(s[i] == 'H' || s[i] == 'Q'||s[i] == '9')
        {
            ans = "YES";
            break;
        }
    }
    
    
    
    cout<<ans<<endl;
    
    return 0;
}
