#include<bits/stdc++.h>
#define test for(int i=0;i<t;i++)
#define ull unsigned long long int
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);  
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	IOS
	int t,n;
	cin>>t;
	test
	{
		cin>>n;
		int a[n+1];
		rep(i,n)
			cin>>a[i];
		a[n]=0;	
	
		int sum=0,max_future_price=0;
		
		for(int i=n-1;i>=0;i--)
		{
			max_future_price=max(max_future_price,a[i]);
			sum+=max_future_price-a[i];
		}
		
		cout<<sum<<endl;
	
	}return 0;
}
