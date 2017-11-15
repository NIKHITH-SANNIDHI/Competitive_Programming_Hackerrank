#include<bits/stdc++.h>
#define test for(int i=0;i<t;i++)
#define ull unsigned long long int
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);  
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

inline ull getxor(ull i)
{
	if(i%4==0)return i;
	if(i%4==1)return 1;
	if(i%4==2)return i+1;
	if(i%4==3)return 0;
}

int main()
{
	IOS
	int t;
	cin>>t;
	test
	{	
		ull sum_xor=0,l,r;
		cin>>l>>r;
		
		while(l%4!=0)
		{
			sum_xor^=getxor(l);
			l++;
	//		cout<<"inside left"<<endl;
		}
		
		while(r%4!=3 && l<=r)
		{
			sum_xor^=getxor(r);
			r--;
			
	//		cout<<"inside right"<<endl;
		}
		
		if(r-l+1>=4)
			sum_xor^=(r-l+1)%8?2:0;
		
		else //if(r-l+1<4)
		{	while(l!=r && l<r)
				sum_xor^=getxor(l),l++;//,cout<<"inside while";
		 	if(l==r)
				sum_xor^=getxor(r);
		}
		
		
		cout<<sum_xor<<endl;
	}
	
			return 0;

}
