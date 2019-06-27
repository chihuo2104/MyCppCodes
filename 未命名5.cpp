#include<iostream>
#include <cmath>
using namespace std;
bool prime(int s);
int main()
{
	int count=0;
	for(int i = 1; i <= 10000; i++)
	{
		cout<<prime(i)<<","; 
	 }
	return 0;
}
bool prime(int s)
{
	switch(s)
	{
		case 0:
			return false;
		case 1:
			return false;
		default:
			for(int i=2;i<=sqrt(s);i++)
			{
				if(s%i==0)
				{
					return false;
				}
			}
			break;
	}
	return true;
}
