#include<iostream>
using namespace std;
int main()
{
	int a[1000],b=0;
	for(int i=10;i*i<=9999;i++)
	{
		if(i*i>=1000 && i*i<=9999)
			a[b++]=i*i;
	}
	cout<<"the perfect squares are "<<endl;
	for(int i=0;i<b;i++)
	{
		cout<<a[i]<<endl;
	}
	
	cout<<"----------------------"<<endl;
	for(int i=0;i<b;i++)
	{
		int l=a[i]/100,m=a[i]%100;
		int n=(l+31)*100+(m+31);
		cout<<"n = "<<n<<endl;
		for(int j=0;j<b;j++)
		{
			if(n==a[j])
				cout<<"the answer is "<<a[j]<<endl;
		}
	}
	return 0;
}
