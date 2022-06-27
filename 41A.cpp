#include <iostream>
using namespace std;
#include <string>
 
int main() {
    string first , second;
    bool is = true;
    cin>>first>>second;
    int len = first.length()-1;
    
    for(int i = 0; i<first.length() ;i++)
    {
        
        if(first[i] != second[len-i])
        {
            is = false;
            break;
        }
        
    }
    if (is) cout<<"YES";
    else cout<<"NO"; 
     
     
    return 0;
}
