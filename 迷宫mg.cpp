#include<iostream>
#include<fstream>
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
bool flag[101][101];
bool pd=false;
char mg[101][101];
int startx,starty;
int endx,endy;
int n;
void dfs(int x,int y);
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mg[i][j];
			if(mg[i][j]=='#')
			{
				flag[i][j]=true;
			}
		}
	}
	cin>>startx>>starty>>endx>>endy;
	if(flag[startx][starty]||flag[endx][endy])
	{
		cout<<"NO";
		return 0;
	} 
	dfs(startx,starty);
	return 0;
}
void dfs(int x,int y)
{
	int newx,newy;
	for(int i=0;i<4;i++)
	{
		newx=x+dx[i];
		newy=y+dy[i];
		if(!flag[newx][newy]&&newx<=n-1&&newy<=n-1&&newy>=0&&newx>=0)
		{
			if(newx==endx&&newy==endy)
			{
				cout<<"Yes";
				pd=true;
			}
			else
			{
				dfs(newx,newy);
			}
		} 
	}
}

