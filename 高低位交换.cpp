#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	unsigned long long a;
	unsigned long long ah,al,newa;
	cin>>a;
	newa=a/65536+a%65536*65536;
	cout<<newa; 
	return 0;
	
}

