#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std; 
int main()
{
	int a,b;
	cin>>a>>b;
	int c=a*b;
	char s[100];
	sprintf(s,"%d",c);
	for(int i=strlen(s)-1;i>=0;i--)
	{
		cout<<s[i];
	}
	return 0;
}
