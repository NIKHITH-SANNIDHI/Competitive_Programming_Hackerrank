#include<bits/stdc++.h>
#define test for(int o=0;o<t;o++)
#define ull unsigned long long int
#define ll long long int

using namespace std;

bool sort_by(const pair<int,ll>&a,const pair<int,ll>&b)
{
	return a.second<b.second;
}

int main()
{
//	test
	{
		int n;
		cin>>n;
		pair<ll,int>time[n];
		ll t,d;
		
		for(int i=0;i<n;i++)
		{
			cin>>t>>d;
			time[i]=make_pair(t+d,i);
		}
		
		
		sort(time,time+n);
		
		for(int i=0;i<n;i++)
		{
			cout<<time[i].second+1<<" ";
		}
		
		
		
	}
	return 0;
}
