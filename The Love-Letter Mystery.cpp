#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;


int main() {
    int t;
    cin>>t;
    int min[t],l;
    for(int i=0;i<t;i++)
      {
      	min[i]=0;
        char s[10000];
        cin>>s;
        l=strlen(s);
        cout<<l<<endl;
        if(l%2!=0)
            {
                for(int i=l/2;s[i]!='\0';i++)
		          s[i]=s[i+1];   
        } 
        cout<<s<<endl;
        char substr[5000];
        for(int j=0;j<l/2;j++)
        {
         	   substr[j]=s[j];
        }
            cout<<substr<<endl;
            strrev(substr);
            cout<<substr<<endl;
            for(int k=l/2;s[k]!='\0';k++)
                {
                if(substr[k]!=s[k])
                    {
                    if((int)substr[k]>(int)s[k])
                     min[i]+=(int)substr[k]-(int)s[k];
                    else
                        min[i]+=((int)s[k])-((int)substr[k]);
                   
                }
                
            }
            cout<<min[i];
            
        }
        
    
    for(int i=0;i<t;i++)
        cout<<min[i]<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

