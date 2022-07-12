#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int n, m; cin>>n>>m;
    
    map<string, string> map;

    while(m--)
    {
        string word1, word2; 
        
        cin>>word1>>word2;
        
        if(word1.length() > word2.length())
        {
            map[word1] = word2;
        }
        else
        {
            map[word2] = word1;
        }
        
        
    }
    
  string lecture; 
    
    while(n--)
    {
        cin>>lecture;
        if (map.find(lecture) != map.end())
        {
            cout<<map[lecture]<<" ";
        }
        else
        {
            cout<<lecture<<" ";
        }
        
    }
    


    return 0;
}
