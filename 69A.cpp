#include <iostream>
#include <string>
using namespace std;


int main() { 
    int n, x, y, z;
    int tx=0,ty=0,tz=0;
    cin>>n;


    for(int i = 0; i<n;i++)
    {
        cin>>x>>y>>z;
        tx += x;

        ty += y;
        tz += z;
        
    }
    if(tx!= 0 ||ty!= 0 ||tz!= 0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
