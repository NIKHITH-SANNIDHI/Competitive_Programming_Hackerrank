#include<bits/stdc++.h>
#define ll long long
using namespace std;


/*void mysort(pair<ll,int>p[],ll n)
{
	for(ll i=0;i<n-1;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			if(p[i].first<p[j].first)
			{
				swap(p[i].first,p[j].first);
				swap(p[i].second,p[j].second);
			}
		}
	}
}
*/


bool mycmp(const pair<ll,int>&i,const pair<ll,int>&j)
{
	return i.first>j.first;
}

int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n];
	vector<pair<ll,int> >p;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		p.push_back(make_pair(a[i],i));
	}
	
	sort(p.begin(),p.end(),mycmp);
	
	
	
	int i=0;
	for(;i<n && k!=0;i++)
	{
		if(a[i]!=p[i].first)
		{
			int t=a[i];
			a[i]=p[i].first;
			a[p[i].second]=t;
			k--;
		}
		
	}
	
	for(ll j=0;j<n;j++)
		cout<<a[j]<<" ";
	
	
	return 0;
	
}
