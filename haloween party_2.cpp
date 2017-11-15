#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    long int k,ans[20];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>k;
        long int max=0,x,y;
        x=k/2;
        	if(k%2!=0)
       			 y=k/2+1;
       		else
       			y=k/2;
        cout<<"x+y= "<<x+y;
        cout<<"maximum pieces "<<x*y;
		
      	//ans[i]=max;  
    }
    
    //for(int i=0;i<t;i++)
    //  	cout<<ans[i]<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

