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
	int w[n];
	rep(i,n)cin>>w[i];
	
	sort(w,w+n);
	
	int freq=0;
	
	
	for(int i=0;i<n;i++)
	{

		freq++;
		cout<<"freq= "<<freq<<endl;
	
		int j;
		for(j=i;j+1<n&&w[j+1]-w[i]<=4;)
		{
			j++;
			cout<<"i= "<<i<<" j= "<<j<<endl;
		}
		i=j;
		
		cout<<"i= "<<i<<endl;
			
	}	
	
	/*for(int j=0;j<n;j++)
	{
		freq++;
		i=j;
		cout<<"freq= "<<freq<<endl;
		cout<<"i= "<<i<<endl;
		if(i+1<n&&w[i+1]-w[i]<4)
		{
			j++;
				cout<<"in i+1  i= "<<i<<endl;
	
			if(i+2<n&&w[i+2]-w[i]<4)
			{
				j++;
				cout<<"in i+2  i= "<<i<<endl;

				if(i+3<n&&w[i+3]-w[i]<4)
				{
					j++;
				cout<<"in i+3  i= "<<i<<endl;

					if(i+4<n&&w[i+4]-w[i]<4)
						{
							j++;
										cout<<"in i+4  i= "<<i<<endl;

						}
				}
			}
		//	j=i;
		}
	
	}	
	*/
	
	cout<<freq;	
			
	return 0;
}
