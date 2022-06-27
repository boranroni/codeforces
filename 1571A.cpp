#include <iostream>
using namespace std;
#include <string>
#include <map>
int main() {
    int t;
    cin>>t;
    map <string, int> hash;

    hash["greater"] = 1;
    hash["lower"] = 1;
    
    
    
    for (int i = 0 ; i<t; i++)
    {
        string s;
        cin>>s;
        

        for(int k = 0; k<s.length(); k++)
        {
            if(s[k] == '<') {
                if(hash["greater"] != 1){
                    hash["lower"] = 0;
                    break;
                }
                else{
                    hash["lower"]+=1;
                }
            }
            else if(s[k] == '>')
            {
                if(hash["lower"] != 1){
                    hash["lower"] = 0;
                    break;
                }
                else{
                    hash["greater"]+=1;
                }
            }
            
            
        }

    
        if (hash["lower"] == 0) cout<<"?"<<endl;
        else if (hash["greater"] == hash["lower"]) cout<<"="<<endl;
        else if(hash["greater"] > hash["lower"]) cout<<">"<<endl;
        else if(hash["greater"] < hash["lower"]) cout<<"<"<<endl;


        hash["greater"] = 1;
        hash["lower"] = 1;
    }


    

    return 0;
}
