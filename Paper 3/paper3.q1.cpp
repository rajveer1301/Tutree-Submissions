#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m; ///n is the size of a1 array. m is the size of a2 array.
    int a1[n],a2[m];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
        mp[a1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>a2[i];
        mp[a2[i]]++;
    }
    vector<int>unionn;
    vector<int>intersection;
    for(auto it: mp)
    {
        if(it.second>1)
        {
            intersection.push_back(it.first);
        }
        unionn.push_back(it.first);
    }
    cout<<"Union :";
    for(int i=0;i<unionn.size();i++)
    {
        cout<<unionn[i]<<" ";
    }
    cout<<endl;
    cout<<"Intersection: ";
    for(int i=0;i<intersection.size();i++)
    {
        cout<<intersection[i]<<" ";
    }
    cout<<endl;
}
