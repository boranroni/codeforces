
#include <iostream>

using namespace std;

int main()
{
    int n,m,k,t;
    cin>>t;
    
    while(t--)
    {
        cin>>n>>m>>k;
        if(m==0)
        {
            cout<<0<<endl;
            continue;
        }
        int card = n/k;
        if(card > m)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<card - (m - card + k - 2) / (k - 1) <<endl;
        }
    }

    return 0;
}
