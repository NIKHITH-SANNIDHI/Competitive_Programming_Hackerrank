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
	int t;
	cin>>t;
	test
	{
		int n;
		cin>>n;
		ull h[n],sum=0;
		rep(i,n)
			cin>>h[i],sum+=h[i];
		
		sort(h,h+n);
		ull s=1;
		
		rep(i,n)
		{
			if(sum*s<(sum-h[i])*(s+1))
			{
				s++;
				sum-=h[i];
			}
			
			else
				break;
				
		}
		
		cout<<sum*s<<endl;
		
			
	}

	return 0;
}
