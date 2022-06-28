#include <iostream>
using namespace std;
#include <string>
#include <map>
#include <algorithm>
#include <functional>
#include <array>
#include <numeric>

int main() {
    int n, cur = 0,f,sum = 0; 
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++) {
        cin>>f;
        sum += f;
        arr[i] = f;
    }
   
    sort(arr, arr+n);
    int tmp = 0, ans= 0;
    for(int i=n-1; i>=0;i--)
    {
        tmp+=arr[i];
        ans++;
        if(tmp>sum-tmp) break;
    }
    
    cout<<ans<<endl;
    return 0;
}
