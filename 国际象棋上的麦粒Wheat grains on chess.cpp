#include<iostream>
#include<fstream>
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
int pow2(int n);
using namespace std;
int main()
{
	int i,n,count=0;
	cin>>n;
	for(i=1;i<=n;i++){count+=pow2(i);}
	cout<<count;
	return 0;
}
int pow2(int n)
{
	int count=1,i;
	if(n==1){return 1;}
	else{
		for(i=1;i<n;i++){count*=2;}
		return count;
	}
}
