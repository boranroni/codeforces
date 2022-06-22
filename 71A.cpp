#include <iostream>
#include <string>
#include<cstring>
using namespace std;
 
int main() {
    int n;
    char word[111111];
    cin>>n;
    for(int i = 0; i<n;i++)
    {
        cin>>word;
        int wordsize = strlen(word);
        if (wordsize>10)
        {
            printf("%c%d%c\n",word[0],wordsize-2,word[wordsize-1]);
            
        }
        else
        {
            printf(word);
            printf("\n");
        }
    };
    
    
    
    return 0;
}
