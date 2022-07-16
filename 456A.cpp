#include <iostream>

int main() {
   int i, a,b;
   std::cin>>i;
   while(i--)
   {
        std::cin>>a>>b;
        
        if(a<b)
        {
            std::cout << "Happy Alex"<<std::endl; 
            return 0;
            
        }
       
   }
    std::cout<<"Poor Alex"<<std::endl;
    return 0;
}
