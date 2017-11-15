#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<n<<endl;
    
    
    while(n!=0)
     {
        int min=a[0];
    for(int i=0;i<n;i++)
        {
             if(min>a[i])
                 min=a[i];
                 
    	}
    	
    for(int i=0;i<n;i++)
        {
            a[i]=a[i]-min;
    }
    	
        int k=0;
	for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
                k++;
        }
        if(k!=0)
        cout<<k<<endl;
		int b[1000],c=0,l=0;        
    for(int i=0;i<n;i++)
    {	
    	if(a[i]!=0)
    	{
    		b[c++]=a[i];
		l++;
		}
    }
    n=l;
    for(int i=0;i<n;i++)
    	a[i]=b[i];
    	
        
    }
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

