#include<iostream>
#include<algorithm>
using namespace std;
int count;
int pd(int n);
int main()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	do{
		n=pd(n);
	}while(n!=1);
	cout<<count;
	return 0;
}
int pd(int n)
{
	if(n%2==0)
	{
		n/=2;
	}
	else
	{
		n=(n*3+1)/2;
	}
	count++;
	return n;
}
