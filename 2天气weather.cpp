#include<iostream>
using namespace std;
int main()
{
	int a[1000]={0},n;
	cin>>n;
	int count=0,high=0;
	bool IsCount=false;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		{
			count++;
			IsCount=true;
		}
		else
		{
			if(IsCount)
			{
				count++;
				IsCount=false;
			}
			if(high<count)
			{
				high=count;
			}
			count=0;	
		}
	}
	cout<<high;
	return 0;
}

