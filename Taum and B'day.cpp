#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    long long int b,w,x,y,z,cost=0,c1,c2;
    cin>>t;
    for(int i=0;i<t;i++)
     {
        cin>>b>>w;
        cin>>x>>y>>z;
        
        if(y>z && y>x)
        {   
             c1=b*x+w*(x+z);
             c2=b*x+w*y;
         if(c2>c1)
             cost=c1;
         else
             cost=c2;
        }
        
        else if(x>z && x>y)
        {
            c1=w*y+b*(y+z);
            c2=w*y+b*x;
           if(c2>c1)
             cost=c1;
         else
             cost=c2;
        }     
       
        
        else
            cost=b*x+w*y;
            
        
        cout<<cost<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

