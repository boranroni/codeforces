#include <iostream>
using namespace std;

int main() { 
    int n, m, a;
    cin>>n>>m>>a;
    long long c = 0, d = 0;


    if(n%a)
        c = += n/a + 1;
    else 
        c += n/a;
    if(m%a)
        d = += m/a + 1;
    else 
        d += m/a;
    cout<<c*d<<endl;


   return 0;
}
