#include<iostream>
#include<fstream>
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
using namespace std;
int visit[101];
int choose[101];
int num[101];
int n;
int c;
bool isSearch=false;
int ans;
int count;
int dfs(int n);
void print(int k);
int main()
{
	cin>>n;
	cin>>ans;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	dfs(1);
	if(isSearch)
	{
		cout<<"Total="<<c;
	}
	else
	{
		cout<<"No result!";
	}
	return 0;
}
int dfs(int k)
{
	for(int i=1;i<=n;i++)
	{
		if((!visit[i])&&(i>choose[k-1]))
		{
			visit[i]=1;
			choose[k]=i;
			count+=num[i];
			if(count==ans)
			{
				print(k);
			}
			else
			{
				dfs(k+1);
			}
			visit[i]=0;
			count-=num[i];
		}
	}
}
void print(int k)
{
	c++;
	isSearch=true;
	for(int i=1;i<k;i++)
	{
		cout<<num[choose[i]]<<" ";
	}
	cout<<num[choose[k]];
	cout<<endl;
}
