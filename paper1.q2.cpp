#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lld;
#define pq priority_queue<lld>
#define rpq priority_queue<lld,vector<lld>,greater<lld>>
#define mod 1e6+5
int main()
{
    ll n;cin>>n; ///length of the running integer
    lld a[n],m; ///Stream
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=a[0];
    pq min_heap;rpq max_heap;
	min_heap.push(a[0]);
	cout<<a[0]<<" ";
	for (ll i=1; i < n; i++)
	{
		if (min_heap.size()>max_heap.size())
		{
			if (a[i]<m)
			{
				max_heap.push(min_heap.top());min_heap.pop();
				min_heap.push(a[i]);
			}
			else
            {
                max_heap.push(a[i]);
            }
			m=((min_heap.top()+max_heap.top())/2.0);
		}
		else if (min_heap.size()==max_heap.size())
		{
			if (a[i]<m)
			{
				min_heap.push(a[i]);
				m=(lld)min_heap.top();
			}
			else
			{
				max_heap.push(a[i]);
				m=(lld)max_heap.top();
			}
		}
		else
		{
			if (a[i]>m)
			{
				min_heap.push(max_heap.top());
				max_heap.pop();
				max_heap.push(a[i]);
			}
			else
            {
                min_heap.push(a[i]);
            }
			m =(min_heap.top()+max_heap.top())/2.0;
		}
		cout<<m<<" ";
	}
}
