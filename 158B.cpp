
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, s; cin>>n;
    int taxi = 0;
    int count[4] = {0, 0, 0, 0};
    
    while(n--)
    {
        cin>>s;
        if(s == 4) taxi++;
        else if(s == 3)
        {
            if(count[0])
            {
                count[0]--;
                taxi++;
            }
            else
            {
                count[2]++;
            }
        }
        else if(s == 2)
        {
            if(count[1])
            {
                count[1]--;
                taxi++;
                
            }
            else
            {
                count[1]++;
            }
        }
        else
          {
            if(count[2])
            {
                count[2]--;
                taxi++;
            }
            else
            {
                count[0]++;
            }
            
              
          }
        
    }
    
 if(count[0])
    {
        count[1] += (count[0]/2);
        count[0]  = count[0]%2;
    }
    if(count[1])
    {
        taxi += (count[1]/2);
        count[1] = count[1]%2;
    }
    if(count[0] || count[1])
    {
        taxi++;
    }
    if(count[2])
        taxi+=count[2];

    cout<<taxi<<endl;
    
    return 0;
}
