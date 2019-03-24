#include<iostream>
#include<fstream>
using namespace std;
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
int main()
{
	int a[101]={0,1,2,4};
	int i,n;
	cin>>n;
	for(i=4;i<100;i++)
	{
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	cout<<a[n];
	return 0;
}

