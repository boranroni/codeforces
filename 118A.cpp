#include <iostream>
#include <string>
using namespace std;


int main() { 
    string s;
    cin>>s;

    for(int i = 0; i<s.length(); i++)
    {
        // "A", "O", "Y", "E", "U", "I
        s[i] = tolower(s[i]);
        
        if (s[i]== 97 || s[i] == 111 || s[i] == 121 || s[i] == 101 || s[i] == 117 ||s[i] == 105)
        {
            continue;
        }
        else
        {
            cout<<"."<<s[i];
        }
    }

  
   return 0;
}
