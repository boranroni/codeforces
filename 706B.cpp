
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,j,k,ans;
    cin>>n;
    int arr[n],p;
    int cnt=0;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int m; cin>>m;
    
     while(m--)
    {
        int k; cin>>k;
        ans=upper_bound(arr,arr+n, k)-arr;
        cout<<ans<<endl;
    }
    
    
    return 0;
}
