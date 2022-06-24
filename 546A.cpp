#include <iostream>
using namespace std;
 
int main() {
    int k,n,w;
    
    cin>>k>>n>>w;
    
  
    //I know math so I can use n*(n+1)/2
    int money = k*((w*(w+1))/2)-n;
    
    
    if (money<0) money = 0;
    cout<<money<<endl;
    
    return 0;
}
