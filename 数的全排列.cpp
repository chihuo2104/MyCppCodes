#include<iostream>
#include<fstream>
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
using namespace std;
int visit[101];
int choose[101];
int in;
int dfs(int n);
void print();
int main()
{
	cin>>in;
	dfs(1);
	return 0;
}
int dfs(int k)
{
	for(int i=1;i<=in;i++)
	{
		if((!visit[i]))
		{
			visit[i]=1;
			choose[k]=i;
			if(k==in)
			{
				print();
			}
			else
			{
				dfs(k+1);
			}
			visit[i]=0;
		}
	}
}
void print()
{
	for(int i=1;i<=in;i++)
	{
		cout<<choose[i];
	}
	cout<<endl;
}
