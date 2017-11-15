#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include	<math.h>
using namespace std;


int main() 
{
	unsigned long int p,q,n,x,y,f=0,a=0,b=0,k;
	cin>>p>>q;

	for(unsigned long int i=p;i<=q;i++)
	{
		int dgt1=0,dgt2=0;
		n=i;
		while(n)
		{
			dgt1++;
			n=n/10;
		}
		
		y=x=i*i;
		
		while(x)
		{
			dgt2++;
			x=x/10;
		}
		cout<<"for i="<<i<<"dgt1= "<<dgt1<<" dgt2= "<<dgt2<<endl;
		k=1;
		for(int j=1;j<=dgt1;j++)
		k=k*10;
		
		a=y/k;
		cout<<"a= "<<a;
		if(dgt1!=dgt2-dgt1)
		{
			k=10;
			for(int j=1;j<=dgt2-dgt1;j++)
			k=k*10;
			cout<<"k= "<<k;
		}
		
		b=y%k;
		cout<<"  b= "<<b<<endl;
		
		if(i==(a+b))
		{
			cout<<"for i= "<<i<<"a= "<<a<<" b= "<<b<<endl;
		
			cout<<i<<" "<<"is kaprekar number"<<endl;
			f=1;
		}	
	}
	
	
	if(f==0)
		cout<<"INVALID RANGE.";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



