
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    string s;
    cin >> s;
    int c=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            c+=1;
            
        }
    }
    cout<<c<<endl;
    if(c == s.length()-1)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=65&&s[i]<=90)
                s[i]+=32;
            else if(s[i]>=97&&s[i]<=122)
                s[i]-=32;
        }
    }
    cout << s << endl;
    return 0;
}
