#include<iostream>
#include<algorithm>
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
using namespace std;
int ArrayMax(int a[5]);
int ArrayMin(int a[5]); 
int main()
{
	int i,j,k,sh[5],a[5][5];
	int andian,adx=0,ady=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	}
	int t;
	for(i=0;i<5;i++)
	{
		t=ArrayMax(a[i]); 
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				sh[k]=a[k][j];
			}
			if(ArrayMax(a[i])==a[i][j]&&ArrayMin(sh)==a[i][j])
			{
				adx=i+1;
				ady=j+1;
				andian=a[i][j];
			}
		}
	}
	cout<<adx<<" "<<ady<<" "<<andian;
	return 0;
}
int ArrayMax(int a[5])
{
	sort(a,a+6);
	return a[4];
}
int ArrayMin(int a[5])
{
	sort(a,a+6);
	return a[0];
}
