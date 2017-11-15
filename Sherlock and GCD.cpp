#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n;
    cin>>t;
    long int a[100];
    for(int i=0;i<t;i++)
    {
        cin>>n;
   		for(int j=0;j<n;j++)
        	cin>>a[j];
    
    long int u;
     	
		 for(int j=0;j<n-1;j++)
        {    	for(int k=j+1;k<n;k++)
        			if(a[j]>a[k])
        			{
        				 u=a[j];
        				a[j]=a[k];
        				a[k]=u;
        		}
        }
        
        
        for(int j=0;j<n;j++)
        	cout<<a[j]<<endl;
        	cout<<endl;
        	
			long int set[n];
			int c=0;
				set[0]=a[0];
        
		 for(int j=1;j<n;j++)
        {    	if(set[c]!=a[j])
        			{
        				set[++c]=a[j];
        			}
			        	
        }
		for(int j=0;j<=c;j++)
        	cout<<set[j]<<endl;
        	
        	long int x=2;
        	
			do
        	{
        	for(int j=0;j<=c;j++)
        	{
        		
        		int f=0;
        			
        			if(set[j]%x==0)
					{
						
							for(int k=j+1;k<=c;k++)
							{
								if(set[k]%x==0)
									{
										for(int l=k;l<c;l++)
										{
										set[l]=set[l+1];
										}
										c--;
									}
						
							}
						
					}		
				x++;
	       	}
	       }while(x<=set[c]);
	       
        	cout<<"new set is "<<endl;
        	
    	for(int j=0;j<=c;j++)
        	cout<<set[j]<<endl;
        	
        int f=1,y=1;
        x=2;
        
		do	
    	{
			for(int j=0;j<=c;j++)
			if(set[j]%x==0 && y==1 )
			 {
                for(int k=j+1;k<=c;k++)
			{
				if(set[k]%x==0)
				{f=0,y=0;
				
				}
			}
                
            }
			x++;
    	}while(x<=set[c] && f!=0);
        
        if(f==1 && c!=0)
        cout<<"YES"<<endl;
        else if(f==0)
        cout<<"NO"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

