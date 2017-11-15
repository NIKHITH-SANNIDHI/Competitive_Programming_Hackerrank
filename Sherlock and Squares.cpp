#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    long long int a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        int count=0;
        for(int j=1;j*j<=b;j++)
        	if(j*j>=a && j*j<=b)
        		count++;
        cout<<count<<endl;		
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

