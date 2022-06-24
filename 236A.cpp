
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string s;
    cin>>s;
    int unique = 0;
    
    map<char, int> m;
    
    
    
    for(int i = 0; i<s.length(); i++)
    {
        if(m.find(s[i]) != m.end()) continue;
        else
        {
            unique++;
            m[s[i]] = 1;
        }
            
    }
    
    
    
    if(unique%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout <<"IGNORE HIM!"<<endl;
    return 0;
}
