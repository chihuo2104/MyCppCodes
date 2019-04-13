#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	bool book[1000000]={0};
	int n,count=0;
	int fin;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		fin=(i/2)+(i/3)+(i/5);
		if(!book[fin])
		{
			count++;
		}
		book[fin]=true;
	}
	cout<<count;
	return 0;
}

