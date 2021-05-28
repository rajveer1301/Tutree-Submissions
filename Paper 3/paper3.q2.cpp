#include<bits/stdc++.h>
using namespace std;
void rotate(int a[],int n,int d)
{
    d=d%n;
    cout<<a[d]<<" ";
    int st=d;
    int i=st+1;
    while(i!=st)
    {
        cout<<a[i]<<" ";
        i++;
        i=i%n;
    }
}
int main()
{
    int n;cin>>n;///length of the array
    int a[n];/// array declaration
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d;cin>>d; /// after d elements we have to rotate array
    rotate(a,n,d);
}
