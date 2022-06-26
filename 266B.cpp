#include <string>
#include <iostream>
using namespace std;

int main() {
    
    int n, t;
    
    string queue;
    cin>>n>>t>>queue;
    
    for(int i = 0; i<t;i++)
    {
        for(int k = 0; k<n-1;k++)
        {
            if(queue[k]=='B' && queue[k+1]=='G')
            {
                queue[k]='G' ;
                queue[k+1]='B';
                k++;
            }
        }
    }
    
    cout<<queue<<endl;
    return 0;
}
