#include <iostream>
#include <math.h>
int main() {
    int n, t, num; std::cin>>n>>t;
    int k = t;
    int length = 1;
    while ( t /= 10 )
        length++;
    
    if(length>n) std::cout<<-1<<std::endl;
    else
    {
        
        std::cout<<k;
        while(n-length)
        {
            std::cout<<0;
            n--;
        }
    }
    
    return 0;
}
