#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() { 
    int m, n, i, cur = 1;
    long long int time = 0;
  
    cin>>n>>m;

    int task[m];

    for(int i = 0; i<m; i++)
    {
        cin>>task[i];
    }
    int *point = &task[0];


    
    for(i = 0; i<m; i++)
    {
        if(*point-cur<0) 
            time += n-cur+*point;
        else
            time += *point-cur;
        
        cur = *point;
        point++;
    }

    cout<<time<<endl;
    return 0;
}
