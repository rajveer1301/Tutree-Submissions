#include <bits/stdc++.h>
using namespace std;
int minn=INT_MAX;
int main()
{
    int i,n;cin>>n;
    int a[n];
    map<int,int>fst_occ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(fst_occ[a[i]]==0)
        {
            fst_occ[a[i]]=i+1;
        }
    }
    int x,y;cin>>x>>y;
    int recc=min(fst_occ[x],fst_occ[y]);
    recc--;
    for(int j=recc+1;j<n;j++)
    {
        if(a[j]==x||a[j]==y)
        {
            if((a[recc]!=a[j])&&((j-recc)<(minn)))
            {
                minn=abs(j-recc);
            }
            recc=j;
        }
    }
    cout<<minn<<endl;
}
