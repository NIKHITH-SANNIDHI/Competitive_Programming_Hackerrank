#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
	long int n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        long int answer,w;
        answer=n/c;
        w=answer;
        while(w!=0 && w>=m)
        {
        			w-=m;
					answer++;
					w++;        		
        }
        
        // Computer answer
        
        cout<<answer<<endl;
    }
    return 0;
}

