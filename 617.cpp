#include <iostream>
using namespace std;
int main() {
    int x, sum=0;
    
    cin>>x;


    for(int i = 5; i>=1;i--)
    {
        sum+=x/i;
        x=x%i;

    }

    cout<<sum<<endl;

    return 0;
}
