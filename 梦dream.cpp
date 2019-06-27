#include<iostream>
using namespace std;
int a[10];
void fj(int k);
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		fj(i);
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
void fj(int k)
{
	int m;
	while(k)
	{
		m=k%10;
		a[m]++;
		k/=10;
	}
}
