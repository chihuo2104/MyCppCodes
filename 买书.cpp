#include<iostream>
#include<algorithm>
using namespace std;
int imin(int a,int b,int c) {
	if(b>a&&a<c) {
		return b;
	} else {
		if(c>b&&b<a) {
			return b;
		} else {
			return c;
		}
	}
}
bool mycomp(int a,int b)
{
	return a>b;
}
int main() {
	int n,m,a[10000],b,count=0;
	cin>>n;
	int i,j=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		count+=a[i];
	}
	sort(a,a+i,mycomp);
	for(i=2;i<n;i+=3)
	{
		b+=imin(a[i-2],a[i-1],a[i]);
	}
	cout<<count-b;
	return 0;
}

