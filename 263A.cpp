#include <iostream>
#include <cmath>

using namespace std;
int main() 
{
    int n,i,j, column = 0, one = 0;
    
    for(i = 0; i<5; i++)
    {
        for(j = 0; j<5; j++)
        {
            cin>>n;
            
            if(n == 1)
            {
                cout<<abs(2-i)+abs(2-j)<<endl;
                
            }
        }
    }
    
    return 0;
}
