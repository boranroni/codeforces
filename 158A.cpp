#include <iostream>
using namespace std;
int main() {
    int n,k,j, p=0, current = -100;
    cin>>n>>k;
    
    
    for (int c = 1; c<=n; c++)
    {
        cin>>j;
        if(j>0)
        {
                if(c<k)
                {
                    p++;
                    current = j;
                }
                else if(c == k){
                    p++;
                    current =j;
                }
                else{
                    if(current == j){
                        p++;
                    }
                }
        }
        
    }

    cout<<p<<endl;
    return 0;
}
