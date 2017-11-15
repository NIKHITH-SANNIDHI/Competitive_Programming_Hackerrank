#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n,k,sum=0;
	cin>>n>>k;
	ll c[n];
	for(ll i=0;i<n;i++)
		cin>>c[i];
		
	if(k>=n)		//if no. of people is more or equal to demand
	{
		for(ll i=0;i<n;i++)
			sum+=c[i];
		
		cout<<sum;	
	}	
	
	else
	{
		sort(c,c+n);
		ll k1=k,x=0;
		ll i=n-1;
		for(;i>=0;i--)
		{
			
			sum+=(x+1)*c[i];
			k1--;
			if(k1==0)
			{
				k1=k;x++;
			}
		}
		
		cout<<sum;
		
		
		
		
	}
	return 0;
}
