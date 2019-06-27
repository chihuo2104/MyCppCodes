#include<iostream>
#include<set> 
#include<cstdio>
using namespace std;
int main()
{
	set<int> iset[100];
	set<int>::iterator it;
	set<int> tset;
	int m,n,o,tmp;
	int sp[100][2]; 
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>o;
		for(int j=0;j<o;j++)
		{
			cin>>tmp;
			iset[i].insert(tmp);
		}
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>sp[i][0]>>sp[i][1];
	}
	int flag;
	for(int i=1;i<=m;i++)
	{
		flag=0;
		tset.clear();
		for(set<int>::iterator j=iset[sp[i][0]].begin();j!=iset[sp[i][0]].end();j++)
		{	
			tset.insert(*j);
		} 
		for(set<int>::iterator k=iset[sp[i][1]].begin();k!=iset[sp[i][1]].end();k++)
		{
			tset.insert(*k);
		}
		printf("%.1f%%\n",((iset[sp[i][0]].size()+iset[sp[i][1]].size())-tset.size())*100.0/tset.size());
	}
	return 0;
}

