#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i=0;
	cin>>n>>m;
	
	
	while(n>0)
	{
		i++;
		n--;
		if(i%m==0)
			n++;
	}
	cout<<i;

	return 0;
}
