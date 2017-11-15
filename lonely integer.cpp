#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[100],n,l[100],t;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    
     for(int i=0;i<n-1;i++)
        {
        	for(int j=i+1;j<n;j++)
        		if(a[i]>a[j])
        		{
        			t=a[i];
        			a[i]=a[j];
        			a[j]=t;
        		}
    }
    
    for(int i=0;i<n;i++)
        {
        	cout<<a[i]<<endl;
    	}
    
    for(int i=0;i<n;i=i+2)
    {
    	if(a[i]!=a[i+1])
    	{
    	cout<<a[i];
    	return 0;
		}
    }
    cout<<a[n];
	return 0;
	
}
