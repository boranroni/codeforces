#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    int n;
    cin>>n;

    long long int w = 1;
    int nn = n;
    for(int pressed = 0; pressed <n-1; pressed++)
    {
        w += (nn*(pressed+1))-pressed;

        //cout<<"w = "<<w<<"pressed = "<<pressed<<"calc = "<< (nn*(pressed+1))-pressed<<endl;
        nn--;
    }

    cout<<w<<endl;
    return 0;
}
