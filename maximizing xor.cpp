#include<iostream>
using namespace std;
int main()
{
	int l,r,c=-1;
	cin>>l>>r;
	int val[10000],x=l;
	for(int i=l;i<=r;i++)
	{
		while(x<=r)
		{
			val[++c]=i^x;
			cout<<i<<" ^ "<<x<<" = "<<val[c]<<endl;
			x++;
		}
		x=l;
	}
	
	int max=val[0];
    for(int i=1;i<=c;i++)
        if(max<val[i])
            max=val[i];
     cout<<max;       
	return 0;
}
