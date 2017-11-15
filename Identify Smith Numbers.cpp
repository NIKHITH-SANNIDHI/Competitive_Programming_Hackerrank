#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
	
	long int n,pf[1000],a=0;
	cin>>n;
	
	for(long int i=2;i<n;i++)
	{	if(n%i==0)
		{	
			if(i==2)
			pf[a++]=2;
			else
			{
				int prime=1;
				for(long int j=2;j<i;j++)
				{
					if(i%j==0)
						prime=0;
				}
				if(prime)
					pf[a++]=i;
			}
		}
	}
	
		
	long int dsum=0,pfsum=0,p,m;
	p=n;
	
	for(long int i=0;i<a;i++)
	{
		p=p/pf[i];
			if(p%pf[i]==0)
				{
					cout<<"repeated factor is "<<pf[i]<<endl;
					pf[a++]=pf[i];
				}
	}

	cout<<"--------------------";	
	for(long int i=0;i<a;i++)
		cout<<pf[i]<<endl;
	

	for(long int i=0;i<a;i++)
	{
		if(pf[i]<10)
		pfsum+=pf[i];
		else
		{
			m=pf[i];
			while(m)
			{
				pfsum+=m%10;
				m=m/10;
			}
		}
	}
	
	cout<<"pfsum"<<pfsum;
	
	while(n)
	{
		dsum+=n%10;
		n=n/10;
	}		
	cout<<"dsum"<<dsum;
	
	if(pfsum==dsum)
		cout<<"1";
	else
		cout<<"0";
			
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



