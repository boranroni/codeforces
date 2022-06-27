#include <iostream>
using namespace std;
#include <string>

int main() {
    int n,a=0;
    
     cin>>n;
     
    char s[n];

    cin>>s;
     for(int i = 0; i<n ;i++)
     {
        if(s[i]== 'A') a++;
     }
     
    if (a>n-a) cout<<"Anton"<<endl;
    else if(a<n-a) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
     
     
     
    return 0;
}
