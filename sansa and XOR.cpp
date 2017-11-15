#include<bits/stdc++.h>
#define test for(int o=0;o<t;o++)
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	test
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		
		if(n%2==0)		//n is even
		{
			cout<<"0"<<endl;
		}
		
		else
		{
			/*
			ll x=2;
			for(int i=5;i<=n;i+=2)
			{
				x++;
			}
			
			cout<<x<<endl;
			*/
			map<ull,ull>m;
			ll f[n/2+1][n];
			memset(f,0,sizeof(f));
			
			for(ll i=0;i<n/2+1;i++)
			{	for(ll j=0;j<n/2+1;j++)
				{
					cout<<f[i][j]<<" ";
				}
				cout<<endl;
			}
			
			
			int x=n/2+1;
			
			for(ll i=n/2;i>=0;i--)
			{
				for(ll j=n/2;j>=0;j--)
				{
					f[i][j]=x;
					f[j][i]=x;
				}
				x--;
				
			}
			
			cout<<"after entering frequencies"<<endl;
			
			for(ll i=0;i<n/2+1;i++)
			{	for(ll j=0;j<n/2+1;j++)
				{
					cout<<f[i][j]<<" ";
				}
				cout<<endl;
			}
			//int y=n/2+1; //filling the right matrix
			for(ll i=0;i<=n/2;i++)
			{
				for(ll j=0;j<n/2;j++)
				{
					f[i][n-1-j]=f[i][j];
				}
			}
		
			cout<<"after filling the remaining matrix"<<endl;		
			for(ll i=0;i<n/2+1;i++)
			{	for(ll j=0;j<n;j++)
				{
					cout<<f[i][j]<<" ";
				}
				cout<<endl;
			}
			
			ll ans=0,freq;
			for(ll i=0;i<n/2;i++)
			{
				 freq=0;
				for(ll j=0;j<n;j++)
				{
					freq+=f[i][j];
				}
				
				cout<<"the frequency of "<<i<<" and  "<<n-1-i<<" is "<<freq<<endl;
				while(freq)
				{
					ans^=a[i];
					ans^=a[n-1-i];		
					freq--;
				}
			}
			
			freq=0;
			ll k=n/2;
			for(ll j=0;j<n;j++)
			{
				freq+=f[k][j];
			}
			cout<<"the frequency of "<<k<<" is "<<freq<<endl;
			while(freq)
			{
				ans^=a[k];
				freq--;
			}
			
			cout<<ans;
			
			
		}
	
	}
	return 0;
}
