#include<iostream>
#include<string> 
using namespace std;
string tolow(string a);
string delete_space(string a);
string edit(string a);
int main()
{	
	string a,b;
	getline(cin,a);
	getline(cin,b);
	edit(a);
	edit(b);
	if(a==b)
	{
		cout<<"YES"; 
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
string edit(string a)
{
	a=tolow(a);
	a=delete_space(a);
	return a;
}
string tolow(string a)
{
	for(int i=0;i<a.size();i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			continue;
		} 
		a[i]=a[i]-32;//Óëa[i]=a[i]-('a'-'A');ÏàÍ¬ 
	}
	return a;
} 
string delete_space(string a)
{
	int j=0;
	string newa="";
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==' ')
		{
			continue;
		}
		newa[j]=a[i];
		j++;
	}
	return newa;
}
