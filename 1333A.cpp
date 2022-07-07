#include <iostream>

void solve()
{
    int n, m; std::cin>>n>>m;
        
    std::cout<<"W";
    int count = 1;
    for(int i = 0; i<m*n-1;i++)
    {
        std::cout<<"B";
        count++;
        if(count == m)
        {
            std::cout<<std::endl;
            count=0;
        }  
    }
}

int main() {
  int t; 
  std::cin>>t;
    
    while(t--)
    {
        solve();
    }
    
    return 0;
}
