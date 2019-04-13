#include<iostream>
#include<cstdio>
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
using namespace std;
int main()
{
	int yh[21][100];
	int n,i,j;
	cin>>n;
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1||j==i){yh[i][j]=1;}
			else{
				yh[i][j]=yh[i-1][j-1]+yh[i-1][j]; 
			} 
		}
	}
	int num=n-1,k;
	for(i=1;i<=n;i++)
	{
		cout<<yh[i][1];
		for(j=2;j<=i;j++)
		{	
			printf(" %d",yh[i][j]);
		}
		num--;
		cout<<endl;
	}
	return 0;
}
