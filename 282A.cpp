#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,i, num = 0;
    cin>>n;
    
    string operation;
    for(i = 0; i < n; i++)
    {
       
        
        cin>>operation;
        
        if(operation[1] == '+')
        {
            num++;
        }
        else
        {
            num--;
        }
 
    }
    cout<<num;
    return 0;
}
