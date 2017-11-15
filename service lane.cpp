#include<iostream>
using namespace std;
int main()
{
	long int n,i[1000],j[1000];
    int t,k=-1,width[100000],a;
    cin>>n>>t;
    for(a=0;a<n;a++)
    	cin>>width[++k];
    for(a=0;a<t;a++)
    	cin>>i[a]>>j[a];
    for(int b=0;b<=a;b++)
	{
		int min=i[b];
		for(int l=i[b];l<=j[b];l++)
			if(min>l)
				min=l;
		cout<<min<<endl;		
	}	
	return 0;
}
