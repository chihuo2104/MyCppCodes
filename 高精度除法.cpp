#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
int main()
{
	long double a,b,c;
	scanf("%Lf%Lf",a,b);
	c=a/b;
	printf("%*Lf",c);
	return 0;
}

