#include<iostream>
using namespace std;
int main()
{
	int x=98;
	char mi,mj;
	mi=(int)8;mj=static_cast<char>(x);
	cout<<"mi="<<mi;
	cout<<"mj="<<mj;
	return 0;
}
