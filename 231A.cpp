#include <iostream>
using namespace std;
int main() {
    int n, number1, number2, number3,answers = 0;
    cin>>n;
 
    for(int i = 0; i<n ;i++)
    {
        cin>>number1>>number2>>number3;
        if((number1+number2+number3)>1)
        {
            answers += 1;
        }
    }
    
    cout<<answers;
    return 0;
}
