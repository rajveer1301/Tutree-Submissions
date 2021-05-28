#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"This question has no test case given so here I am using my own test case"<<endl;
    int n;cin>>n;/// array size;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int s=0,e=n-1;
    int x,y;
    int minn=INT_MAX;
    while(s<e)
    {
        int tsum=(arr[s]+arr[e]);
        if(abs(tsum)<minn)
        {
            minn=tsum;
            x=arr[s];y=arr[e];
        }
        if(tsum<0)
        {
            s++;
            ///cout<<s<<" ";
        }
        else
        {
            e--;
            ///cout<<e<<endl;
        }
    }
    cout<<x<<" "<<y<<endl;
}
