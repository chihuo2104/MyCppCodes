#include<iostream>
#include<fstream>
#include<algorithm>
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
using namespace std;
bool cmp(int x,int y);
int main()
{
	int a[1000],n,i,count=0;
	cin>>n;
	for(i=0;i<n;i++){cin>>a[i];}
	sort(a,a+i,cmp);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			count+=a[i];
		}
	}
	cout<<count;
	return 0;
}
bool cmp(int x,int y)
{
	return x>y;
}
