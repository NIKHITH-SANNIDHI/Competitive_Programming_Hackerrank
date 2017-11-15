#include<bits/stdc++.h>
#define test for(int i=0;i<t;i++)
#define ull unsigned long long int
#define ll long long int

using namespace std;

void construct(int input[],int seg[],int low,int high,int pos)
{
	if(low==high)
		{
			seg[pos]=input[low];return;
		}
	int mid=(low+high)/2;
	construct(input,seg,low,mid,2*pos+1);
	construct(input,seg,mid+1,high,2*pos+2);	
	seg[pos]=seg[2*pos+1]+seg[2*pos+2];
}

int rangequery(int seg[],int qlow,int qhigh,int low,int high,int pos,int k)
{
	if(qlow<low && qhigh>high)	//total 
		 {
		 	seg[pos]+=k;
		 	return seg[pos];
		}
	else if(qlow>high || qhigh<low)		//no overlap
		return 0;
	int mid=(low+high)/2;
	return	rangequery(seg,qlow,qhigh,low,mid,2*pos+1,k)+rangequery(seg,qlow,qhigh,mid+1,high,2*pos+2,k);		
}

int main()
{
	int n,m;
	cin>>n>>m;
	int a[m],b[m],k[m];
	for(int i=0;i<m;i++)
	{
		cin>>a[i]>>b[i]>>k[i];
	}
	
	int segsize,x=1;
	while(true)
	{
		if(pow(2,x)<n)
			{x++;continue;}
		else
		{
			segsize=pow(2,x)*2+1;
			break;
		}	
	}
	
	int seg[segsize];
	
	for(int i=0;i<segsize;i++)
		seg[i]=0;

	construct(a,seg,0,n-1,0);
	
	for(int i=0;i<m;i++)
	{
		int z=rangequery(seg,a[i],b[i],0,n-1,0,k[i]);
	}
	
	int maxi=*max_element(seg,seg+segsize);
	
	cout<<maxi;
	
	
	return 0;
	
}
