#include<bits/stdc++.h>
#define sz(x)	(int)(sizeof(x)/sizeof(int))
#define test 	int t;	cin>>t;	while(t-- > 0)
#define	rep(i,n)	for(int i=0;i<(n);i++)
#define repp(i,a,b)	for(int i=(a);i<(b);i++)
#define len(x)		(x).length()
#define pb			push_back
using namespace std;
int main() 
{
    int pi[]={3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,3};
    test{
    	int len[500]={0},a=0;
	    int count=0;
	    //char song[500];
		string song;
		getline(cin,song);
		song.erase(song.begin());
		cout<<song<<endl;
		rep(i,len(song))
		{
			if(song[i]!=' ')
			{
				count++;
				if(i==len(song)-1){len[a++]=count;}
				
			}
			else
			{
				len[a++]=count;
				count=0;
				
			}
		}
    //	rep(i,a)
    //		cout<<len[i]<<" ";
    //	cout<<endl;
    	int k=0,f=0;
    	int x=0;
    	//cout<<"a="<<a<<endl;
    	while(x <a)
		{
			//cout<<len[x]<<" "<<pi[x]<<endl;
			if(len[x]!=pi[x])
			{
				cout<<"NO"<<endl;
				f=1;
				break;
			}
			x++;
		}
		if(!f)cout<<"YES"<<endl;
    }
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

