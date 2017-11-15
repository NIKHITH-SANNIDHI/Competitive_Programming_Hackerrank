#include<iostream>
using namespace std;
int main()
{
	char a[]="10001",b[]="01110";
	char s[20][20];
	int x=86,y=75;
	int w=x^y,z=x|y;
	cout<<w<<endl;
	cout<<z;
	for(int i=0;i<3;i++)
    for(int j=0;j<2;j++)   	
        cin>>s[i][j];
	
	if(s[1][0]=='1')
		cout<<s[1][0];
	return 0;
}
