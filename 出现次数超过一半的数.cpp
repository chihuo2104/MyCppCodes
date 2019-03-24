#include<iostream>
using namespace std;
int main()
{
	int i,b,n,a[10000]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>b;
		a[b]++;
	}
	int mid=n/2;
	bool Isok=false;
	for(i=1;i<n;i++)
	{
		if(a[i]>mid)
		{
			cout<<i;
			Isok=true;
			break; 
		}
	}
	if(Isok==false)
	{
		cout<<"no";
	}
	return 0;
}

