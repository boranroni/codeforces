#include <iostream>
using namespace std;

int main() {
     int n, a, b, curMax = 0,passengers = 0;

     cin>>n;
     
     for(int i = 0; i<n;i++)
     {
         cin>>a>>b;
         passengers = passengers - a + b;

         if(passengers > curMax) curMax = passengers;
     }
     
     
     cout<<curMax<<endl;
     
     
     
    return 0;
}
