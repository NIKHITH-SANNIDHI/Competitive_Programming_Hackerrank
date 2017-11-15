#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m[100][100];
    cin>>n;
    char map[100][100];
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		{cin>>map[i][j];}
    
	   for(int i=1;i<n-1;i++)
       	for(int j=1;j<n-1;j++)
		 {
			if((int)map[i][j]>(int)map[i-1][j] && (int)map[i][j]>(int)map[i][j-1] &&
			 (int)map[i][j]>(int)map[i+1][j] && (int)map[i][j]>(int)map[i][j+1])
			 map[i][j]='X';		 	
		 }           

   for(int i=0;i<n;i++)
    {  	for(int j=0;j<n;j++)
			cout<<map[i][j];
       	cout<<endl;
	}
	    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

