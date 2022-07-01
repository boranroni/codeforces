#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() { 
    int n,score = 0;
    string team1, team2 = "", temp;
    
    cin>>n;
    cin>>team1;

    for(int i = 1; i<n;i++)
    {
        cin>>temp;

        if(temp == team1) score++;

        else
        {
            team2 = temp;
            score--;
        }

    }


    if (score>=0) cout<<team1<<endl;
    else cout<<team2<<endl;
    return 0;
}
