#include <iostream>
using namespace std;
#include <string>
 
 
int main() {
     string n;
     int count = 0;
 
     cin>>n;
     
     for(int i = 0; i<n.length();i++)
     {
      if(n[i] == '4' || n[i] =='7'){
       count++;   
      }
      
     }
     bool c = true;
     
     string cc = to_string(count);
     
     for(int i = 0; i<cc.length(); i++)
     {
         if(cc[i] == '4' || cc[i] =='7'){
        
         }
        else{
            c = false;
            break;
     }
     }
     
    if(c) cout<<"YES";
    else cout<<"NO";
     
    return 0;
}
