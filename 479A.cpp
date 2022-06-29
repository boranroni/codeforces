#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;


int main() { 
    int a,b,c;


    cin>>a>>b>>c;

    int myints[5];

    myints[1]= a+b*c;
    myints[2]=a*(b+c);
    myints[3]=a*b*c;
    myints[0]= (a+b)*c;
    myints[4] = a+b+c;


    cout<<*max_element(myints,myints+5)<<endl;

    return 0;
}
