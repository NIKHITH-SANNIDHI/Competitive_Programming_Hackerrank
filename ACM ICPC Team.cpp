#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    char s[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)   	
        cin>>s[i][j];
        
    for(int i=0;i<n;i++)
    	{for(int j=0;j<m;j++)
        	cout<<s[i][j];
        		cout<<endl;
		}
		
	int max=0; 
	for(int i=0;i<n-1;i++)
	{	
		for(int k=i+1;k<n;k++)
		{	int l=0;
			for(int j=0;j<m;j++)
				{if(s[i][j]=='1' || s[k][j]=='1')
					l++;}
		cout<<"l= "<<l<<endl;			
		if(l>max)
			max=l;
		}
	}
		cout<<"max "<<max<<endl;
		int count=0;
	for(int i=0;i<n-1;i++)
	{	
		for(int k=i+1;k<n;k++)
		{	int l=0;
			for(int j=0;j<m;j++)
				{if(s[i][j]=='1' || s[k][j]=='1')
					l++;}		
		if(l==max)
			{
				count++;
			}
		}
	}
	cout<<count;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
        
    return 0;
}


