#include<iostream>
using namespace std;
int gys(int x,int y);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int ngys=gys(a,b);
	int newa=a*b/ngys;
	int ngys2=gys(newa,c);
	int neww=newa*c/ngys2; 
	cout<<neww;
	return 0;
}
int gys(int x,int y)
{
	int z;
	while(x%y!=0)
	{
		z=x%y;
		x=y;
		y=z;
	}
	return y;
}

