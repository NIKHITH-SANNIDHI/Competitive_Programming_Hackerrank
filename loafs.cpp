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
	
	int n;
	cin>>n;
	int b[n],a[n];
	rep(i,n)
		cin>>b[i],a[i]=(b[i]&1)?0:1;
	
	int sum=0,f=0;	
	for(int i=1;i<n-1;i++)
	{
		
		if(a[i+1] && a[i])
		{	sum+=2;cout<<"inside 1"<<endl;
			f=1;
			b[i]++;
			b[i+1]++;
		}
		
		else if(a[i-1] && a[i])
		{
			sum+=2;	f=1;		b[i]++;cout<<"inside 2"<<endl;
			b[i-1]++;
		}
		
		
	}	
	
	if(f)	cout<<sum;
	else 	cout<<"NO";

	return 0;
}
