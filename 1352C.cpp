#include <iostream>
using namespace std;
int main() {
    
    int t,n;
    long long int sum;
    cin>>t;
    for(int i = 0; i<t;i++)
    {
        cin>>n;
        sum = 0;
        for(long long int k= 1; k<=n/2; k++)
        {
           sum += ((k*k)) * 8;

        }
        cout<<sum<<endl;
    }
    


    return 0;
}
