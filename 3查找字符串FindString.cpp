#include<iostream>
#include<string>
#include<cctype>
using namespace std;
string stolower(string x);
int main()
{
	string sh,zfc,zfa[10000];
	int j=0,k;
	string tmp;
	getline(cin,sh);
	getline(cin,zfc);
	zfc=" "+zfc+" ";
	for(int i=0;i<sh.size();i++)
	{
		sh[i]=tolower(sh[i]);
	}
	for(int i=0;i<zfc.size();i++)
	{
		zfc[i]=tolower(zfc[i]);
	}
	if(zfc.find(sh)==string::npos)
	{
		cout<<"-1";
		return 0;
	}
	int count,flag,c=0;
	bool first=false;
	while((c=zfc.find(sh,c))!=string::npos)
	{
		if(!first)
		{
			first=true;
			flag=c;	
		}
		else
		{
			if(zfc[c-1]==' '&&zfc[c+1]==' ')
			{
				count++;
			}
		}
	} 
	cout<<count<<" "<<flag<<endl;
	return 0;
}
string stolower(string x)
{
	for(int i=0;i<x.size();i++)
	{
		x[i]=tolower(x[i]);
	}
	return x;
}
