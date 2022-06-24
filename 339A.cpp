// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    int one = 0, two=0, three=0;
    
    int a[4] = {0};
    
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == '1') a[1]++;
        if(s[i] == '2') a[2]++;
        if(s[i] == '3') a[3]++;
        
    }
    //cout<<one<<two<<three;
    int n = (s.length()+1)/2;
    
    
    for(int i = 1; i < 4; i++)
    {
        for(int k = 0; k<a[i]; k++)
        {
            cout<<i;
            n--;
            if(n!=0) cout<<"+";
        }
    }
    return 0;
}
