#include <iostream>
 
using namespace std;
 
int main()
{
    int input;
    cin>>input;
    
    if(input>2)
    {
        if(input%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
