#include<iostream>
using namespace std;
int main()
{
	int i,l,j,a[100000],m,ms[1000],me[1000];
	cin>>l>>m;
	for(i=0;i<=l;i++)
	{
		a[i]=1;
	}
	for(i=0;i<m;i++)
	{
		cin>>ms[i]>>me[i];
		for(j=ms[i];j<=me[i];j++)
		{
			a[j]=0;
		}
	}
	int count=0; 
	for(i=0;i<=l;i++)
	{
		if(a[i]==0)
		{
			continue;
		}
		count++;
	} 
	cout<<count;
	return 0;
}

