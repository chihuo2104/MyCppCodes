#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
bool IsPrime(int num)
{
	int isprime=1;
	if(num<2)
	{
		return false;
	} 
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			isprime=0;
			break;
		}
	}
	if(isprime==0)
	{
		return false;
	}
	else
	{
		if(isprime==1)
		{
			return true;
		}
		
	}
}
int main()
{
	int a;
	int i,k;
	cin>>a;
	for(i=2;a>0;i++)
	{
		if(IsPrime(i))
		{
			a-=1;
		}
	} 
	cout<<i-1;
	return 0;
}

