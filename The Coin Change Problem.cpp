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
		ull n,m;
		cin>>n>>m;
	
		ull coins[m];
		
		for(ull i=0;i<m;i++)
			cin>>coins[i];
		
		ull t[m+1][n+1];
		
		for(ull j=0;j<n+1;j++)
			t[0][j]=0;
		
	//	cout<<"loop1";
		for(ull i=0;i<m+1;i++)
			t[i][0]=1;
	//	cout<<"loop2";	
		/*for(ull j=1;j<n;j++)
			{
				if(coins[0]>j)
					t[0][j]=0;
				else	
					t[0][j]=1;
			}
			
		*/	
			
		for(ull i=1;i<m+1;i++)
			for(ull j=1;j<n+1;j++)
			{
				if(j<coins[i-1])
					t[i][j]=t[i-1][j];
				else
				{
					t[i][j]=t[i-1][j]+t[i][j-coins[i-1]];
				}	
			}	
			
			
	/*	for(ull i=0;i<m+1;i++)
		{
			for(ull j=0;j<n+1;j++)
				cout<<t[i][j];
			cout<<endl;
		}
	*/	cout<<t[m][n];	
		
		return 0;
	}
