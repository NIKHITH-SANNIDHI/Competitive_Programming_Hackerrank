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
	
	int n;
	cin>>n;
	int h[n];
	rep(i,n)cin>>h[i];

	int newegy,oldegy;
	
	oldegy=ceil(h[n-1]/2.0);
	
	for(int i=n-2;i>=0;i--)
	{
		newegy=oldegy;
		oldegy=ceil((newegy+h[i])/2.0);
	}
	
	cout<<oldegy;
				
	return 0;
}
