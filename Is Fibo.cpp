#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	unsigned long long int t,n,s,i,a=0,b=1,j=2,k=2,l=10000000000;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;	
		int f=0;
		while(j<=l)
		{
			s=b;
			k=a+b;
			if(k==n)
			{
				f=1;
				break;
			}
			a=s;
			b=a+b;
			j++;
		}
	
		f?
	
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

