#include<iostream>
using namespace std;
long cf(int num,int n);
int main()
{
	int num,n,count=0;
	cin>>num>>n;
	for(int i=1;i<=num;i++)
	{
		count+=cf(i,n);
	}
	cout<<count; 
	return 0;
}
long cf(int num,int n)
{
	int x,count=0;
	while(num>0)
	{
		x=num%10;
		if(x==n)
		{
			count++;
		}
		num/=10;
	}
	return count;
}
