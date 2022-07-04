#include <iostream>
using namespace std;
int main() {

    long long int t, a, b;
    
    cin>>t;
    
    for (long long int i = 0; i<t; i++)
    {
        cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
            continue;
        } 
        
        cout<<"YES"<<endl;
        cout<<a*b<<" "<<a<<" "<<a*(b+1)<<endl;

    }
    return 0;
}
