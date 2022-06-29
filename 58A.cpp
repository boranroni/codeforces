#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    char hello[] = "hello";
    char *point = hello;
    
    
    for (int i = 0; i<s.length(); i++)
    {
        //cout<<"s = "<<s[i]<<" point = "<<*point<<endl;
        if(s[i] == *point)
        {
            point++;
        }
        if(!*point) break;
    }
   
    if(!*point) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
