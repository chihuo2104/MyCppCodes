#include<iostream>
const int week[]={0,1,1,1,1,1,0,0};
const int km=250;
using namespace std;
int main()
{
	int m,n,i=0,count=0;
	cin>>m>>n;
	while(i!=n)
	{
		
		if(week[m]!=0)
		{
			count+=km;
		}
		if(m==7)
		{
			m=1;
		}
		else
		{
			m++;	
		}
		i++;
	}
	cout<<count;
	return 0;
}

