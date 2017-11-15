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
	int n;
	test{
		cin>>n;
		int a[n];
		int negflag=0;
		rep(i,n)
		{
			cin>>a[i];
			if(a[i]<=0)
				negflag=1;
		}
		
		if(negflag==0)
		{
			int sum=0;
			rep(i,n)
			{
				sum+=a[i];
			}
			cout<<sum<<" "<<sum<<endl;	
		}
		
		else
		{
				int csum=0,ncsum=0;

				//  contiguous sum
		
				int max_ending_here=0,max_so_far=0;
				
			rep(i,n)
			{
				max_ending_here+=a[i];
				if(max_ending_here<0)
					max_ending_here=0;
				else if(max_so_far<max_ending_here)
						max_so_far=max_ending_here;
			}		 
			
			csum=max_so_far;
			
			//non-contiguous sum
			
			sort(a,a+n,greater<int>());	//decreasing sort
			if(a[0]<=0)	//starting is zero or negative
				csum=ncsum=a[0];
			else	
			rep(i,n)		
			{
				if(a[i]>0)
					ncsum+=a[i];
				else
					break;	
			}	
			
			cout<<csum<<" "<<ncsum<<endl;
		}
		
	}
	return 0;
}
