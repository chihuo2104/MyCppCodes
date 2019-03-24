#include<iostream>
using namespace std;
int a[1000][1000];
int main()
{
	int n,i,j,count=0;
	cin>>n; 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(i==0||j==0||i==n||j==n)
			{
				count+=a[i][j];
			}
		}
	}
	count-=a[0][0]+a[n][0]+a[n][0]+a[n][n];
	cout<<count;
	return 0;
}

