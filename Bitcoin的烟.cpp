#include<iostream>
using namespace std;
int main()
{
	int n,i,k,x=0;
	cin>>n>>k;
	int count=n;
	for(i=n;i>0;i--)
	{ 
		x++;
		if(x%k==0)
		{
			count++;
			i++;
		}
	} 
	cout<<count;
	return 0;
}

