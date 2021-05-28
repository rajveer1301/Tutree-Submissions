#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n; ///Number of elements in an array
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<a[n-1]<<" ";
    ll great=a[n-1];
    for(ll i=n-2;i>=0;i--)
    {
        if(a[i]>great)
        {
            cout<<a[i]<<" ";
            great=a[i];
        }
    }
}
