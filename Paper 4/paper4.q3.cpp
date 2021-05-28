#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(mp[a[i]]==0)
        {
            mp[a[i]]=i+1;
        }
    }
    int x,y;cin>>x>>y;
    cout<<abs(mp[x]-mp[y])<<endl;
}
