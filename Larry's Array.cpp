#include<bits/stdc++.h>
#define test for(int i=0;i<t;i++)
#define ull unsigned long long int
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);  
#define rep(i,n) for(int i=0;i<n;i++)
#define pb(a) push_back(a)

using namespace std;

int main()
{
	IOS
	int t;
	cin>>t;
	test
	{
		int n,x;
		cin>>n;
	//	vector<int>v;
	//	vector<int>u;
		int a[n+1];
		rep(i,n)cin>>a[i];//,v.pb(x),u.pb(x);
		
		int sum=0;
		for(int i=0;i<n-1;i++)
		{
			int x=a[i];
			
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<x)sum++;
			}
		}
	
		sum&1?cout<<"NO"<<endl:cout<<"YES"<<endl;
		

	}			
	return 0;
}
