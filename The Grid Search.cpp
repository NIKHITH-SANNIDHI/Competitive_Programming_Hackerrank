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
		int R,C,r,c;
		cin>>R>>C;
		int g[R][C];
		for(int i=0;i<R;i++)
		{
			for(int j=0;j<C;j++)
				cin>>g[i][j];
		}
		
		cin>>r>>c;
		int p[r][c];
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				cin>>p[i][j];
		}
		int res=0;
		for(int i=0;i<R && !res;i++)
		{
			for(int j=0;j<C && !res;j++)
			{
				if(g[i][j]==p[0][0])
				{
					int f=1,x=0,y=0;
					for(int pi=i;pi<r+i &&f;pi++)
					{
						for(int pj=j;pj<c+j&&f;pj++)
							if(p[x][y++]==g[pi][pj]){res=1;continue;}
							else{ res=0;f=0;break;}
						x++;y=0;		
					}
				}
			}
		}
		
		res?cout<<"YES":cout<<"NO";
		cout<<endl;
	}
		
	return 0;
}
