#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
void cmp(int x,int y);
void cmp_nsp(int x,int y);
int main()
{
	bool isSearch=false;
	int m,x,y,a,b,c;
	cin>>m>>x>>y;
	for(a=99; a>=10; a--)
	{
		b=a/10+(a%10)*10;
		c=abs(a-b)/x;
		if(c*y==b)
		{
			isSearch=true;
			break;
		}
	}
	if(isSearch)
	{
		cout<<a<<" ";
		cmp(m,a);
		cmp(m,b);
		cmp_nsp(m,c);
	}
	else
	{
		cout<<"No Solution";
	}
	return 0;
}
void cmp(int x,int y)
{
	if(x==y)
	{
		cout<<"Ping ";
	}
	else
	{
		if(x<y)
		{
			cout<<"Cong ";
		}
		else
		{
			cout<<"Gai ";
		}
	}
}
void cmp_nsp(int x,int y)
{
	if(x==y)
	{
		cout<<"Ping";
	}
	else
	{
		if(x<y)
		{
			cout<<"Cong";
		}
		else
		{
			cout<<"Gai";
		}
	}
}
