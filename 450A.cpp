#include <iostream>
using namespace std;

int main() {
    int n, m; cin>>n>>m;
    int curIndex = n-1;
    int MaxQ = -1;
    int que;
    
    int temp; 
    for(int i = 0 ; i<n; i++)
    {
        cin>>temp;
        que = temp%m== 0 ? temp/m:temp/m +1;
        
        if(que>= MaxQ)
        {
            
            curIndex = i+1;
            MaxQ = que;
        }
       
        
    }
    
    cout<<curIndex<<endl;
    return 0;
}
