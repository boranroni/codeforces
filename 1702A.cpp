#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        int m; cin>>m;
        int cur = 1;
        while(cur*10<= m) cur*=10;
        
        cout<<m-cur<<endl;
        
    }
    return 0;
}
