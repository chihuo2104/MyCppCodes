#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
string a,b;
int a2[10000],b2[10000];
int c[10000],s[10000];
int len1,len2;
int i;
void read(void)
{
	getline(cin,a);
	getline(cin,b);
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<(a.size());i++)
	{
		a2[i]=a[i]-'0';
	}
	for(int i=0;i<(b.size());i++)
	{
		b2[i]=b[i]-'0';
	}
	len1=a.size();
	len2=b.size();
}
int main()
{
	int len;
	read();	
	len=len1>len2?len1:len2;
	for(i=0;i<=len;i++)
	{
		s[i]=(a2[i]-b2[i]-c[i])%10;
		if(a2[i]-b2[i]<0)
		{
			c[i+1]=1;
		}
	}
	while(len>1&&s[len]=='0')
	{
		len--;
	}
	for(i=len-1;i>=0;i--)
	{
		cout<<s[i];
	}
	return 0;
}

