#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,tmp;cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        mp[tmp]++;
    }
    if(n<2)
    {
        cout<<"There is only one element,enter n value greater than or equal to 2"<<endl;
        return 0;
    }
    ll cnt=1;
    for(auto it:mp)
    {
        if(cnt==1)
        {
            cout<<"The smallest element is:"<<it.first<<endl;
        }
        if(cnt==2)
        {
            cout<<"second Smallest element is:"<<it.first<<endl;
        }
        if(cnt>2)
        {
            break;
        }
        cnt++;
    }
}
