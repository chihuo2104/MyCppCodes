#include<iostream>
using namespace std;
int bs(int a[],int n,int x,int& count);
int main()
{
	int n,x,a[10000],i,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]; 
	}
	cin>>x;
	cout<<bs(a,n,x,count)<<endl;
	cout<<count;
	return 0;
}
int bs(int a[],int n,int x,int& count)
{
	int low=0,high=n-1,middle=(low+high)/2;
	while(low<=high)
	{
		//clog<<"In line 22.This is middle="<<middle<<" low="<<low<<" high="<<high<<endl;
		middle=(low+high)/2;
		if(a[middle]==x)
		{
			count++;
			return middle;
		}
		else if(a[middle]>x)
		{
			//clog<<"In line 30.This is middle="<<middle<<" low="<<low<<" high="<<high<<endl;
			high=middle-1;
			count++;
		}
		else if(a[middle]<x)
		{
			//clog<<"In line 36.This is middle="<<middle<<" low="<<low<<" high="<<high<<endl;
			low=middle+1;
			count++;
		}	
		
	}
	if(low>high)
	{
		return -1;
	}
}
