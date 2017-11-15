#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t,l,n,k,f=0;
    cin>>t;
    int ans[t];
    for(l=0;l<t;l++)
        {
        cin>>n>>k;
        int a[300];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
           {
            if(a[i]<=0)
                f++;                
        }
        for(int i=0;i<n;i++)
           {
            if(f>=k)
                ans[l]=0;
            else
                ans[l]=1;
        }
}
        
 
        for(int i=0;i<t;i++)
            {
            if(ans[i]==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

