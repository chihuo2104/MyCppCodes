#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,int> mp;
	int m,n,tmp;
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>tmp;
			if(mp.find(tmp)!=mp.end())
			{
				mp[tmp]=mp[tmp]+1;
			}
			else
			{
				mp[tmp]=1;
			}
		}
	}
	int big = mp.begin()->second;
	int bigI=mp.begin()->first;
//	map<int,int>::iterator big=mp.begin();
	for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
	{
		if((it->second)>big)
		{
			bigI=it->first;
			big=it->second;
		}
	}
	if(big>=((m*n)/2))
	{
		cout<<bigI;
	}
	return 0;
}

