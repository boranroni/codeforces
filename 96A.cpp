#include <iostream>
using namespace std;
#include <string>
#include <map>

int main() {
    string Fteam;
    int curCount = 1;
    cin>>Fteam;

    char curChar = Fteam[0];

    for(int i = 1; i< Fteam.length(); i++)
    {
        if(curChar == Fteam[i])
        {
            curCount++;
        }
        else
        {
            if(curCount >= 7)
            {
                break;
            }
            else
            {
                curChar = Fteam[i];
                curCount = 1;
            }
        }
        //cout<<curCount<<endl;
    }

        
    if(curCount != 7 )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
