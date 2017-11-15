#include<bits/stdc++.h>
#define test for(int i=0;i<t;i++)
#define ull unsigned long long int
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);  
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main(){
	IOS
  int n;
    cin>>n;
    int rating[n];
    for(int i=0;i<n;i++)
        {
        cin>>rating[i];
    }
    ull candies[n];
    //rep(i,n)
    	candies[0]=1;
   
   for(int i=1;i<n;i++)
	{
		if(rating[i]>rating[i-1])
			candies[i]=candies[i-1]+1;
		else
			candies[i]=1;	
	}
	
//	rep(i,n)
//		cout<<candies[i]<<" ";		
	
//	cout<<endl;
	
	for(int i=n-2;i>=0;i--)
	{
		if(rating[i]>rating[i+1])
		{
			if(candies[i]<=candies[i+1])
				candies[i]=candies[i+1]+1;
		}
	}
	
   
   
   
	ull sum=0;

	rep(i,n)
		sum+=candies[i];//cout<<candies[i]<<" ";		
	//cout<<endl;
	cout<<sum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
