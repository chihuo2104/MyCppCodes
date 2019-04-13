#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
struct YDY{
	int id;
	int x;
	int y;
	double length;
};
bool mycmp(YDY x,YDY y);
int main()
{
	YDY ydy[1000],mmax,mmin;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ydy[i].id>>ydy[i].x>>ydy[i].y;
		ydy[i].length=sqrt((ydy[i].x*ydy[i].x)+(ydy[i].y*ydy[i].y)); 
	}
	mmax=ydy[0];
	mmin=ydy[0];
	for(int i=1;i<n;i++)
	{
		if(mmax.length<ydy[i].length)
		{
			mmax=ydy[i];
		}
		if(mmin.length>ydy[i].length)
		{
			mmin=ydy[i];
		} 
	}
//	sort(ydy,ydy+i,mycmp);
	printf("%04d %04d",ydy[0].id,ydy[n-1].id);
}
bool mycmp(YDY x,YDY y)
{
	return x.length<y.length;
}
