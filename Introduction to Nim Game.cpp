#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int stones[n];
        for(int j=0;j<t;j++)
               cin>>stones[j];
        if(n&1==1)      //odd
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

