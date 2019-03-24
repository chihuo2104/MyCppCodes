#include<iostream>
#include<fstream>
using namespace std;
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
char shu[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void fun(int n,int k)
{
	if(n!=0)
	{	
		fun(n/k,k);
		cout<<shu[n%k];
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	fun(n,k);
	return 0;
}

