#include<iostream>
#include<fstream>
using namespace std;
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
int main()
{
	int a,a2,x=0,y;
	cin>>a;
	a2=a;
	while(a2!=0)
	{
		y=a2%10;
		x=x*10+y;
		a2/=10;
	}
	cout<<x;
	return 0;
}

