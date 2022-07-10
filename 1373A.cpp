#include <iostream>
using namespace std;
int main() {
    int t;
    long long int a, b, c;
    cin>>t;
    
    while(t--)
    {
        cin>>a>>b>>c;
        //  5  10  4
        if(a<c)
        {
            cout<<1<<" ";
        }
        else
        {
            if(b>1)
                cout<<-1<<" ";
        }
        if(a*b > c)
        {
            cout<<b<<endl;

        }
        else
        {
            cout<<-1<<endl;    
        }

    }
    

    return 0;
}
