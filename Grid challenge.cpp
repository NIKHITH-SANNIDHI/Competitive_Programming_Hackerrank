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
		int n;
		cin>>n;
		char g[n][n];
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
					cin>>g[i][j];	
				}
		}
		
		for(int i=0;i<n;i++)
		{
			sort(g[i],g[i]+n);
		}
		
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
					cout<<g[i][j];	
				}
				cout<<endl;
		}
		
		int badflag=0;
		
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<n-1;i++)
			{
				if(g[i][j]>g[i+1][j])
				{
					badflag=1;
					break;
				}
			}
		}
		
		badflag?cout<<"NO"<<endl:cout<<"YES"<<endl;
		
	}
	return 0;
}
