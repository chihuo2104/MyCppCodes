#include<iostream>
#include<fstream>
#include<string>
//#include<windows.h>
using namespace std;
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
int main()
{
	string a;
	cin>>a;
	int i,j;
	for(i=0;i<a.size()-1;i++)
	{  
		cout<<a.substr(i,1)<<endl;
	}
	cout<<a.substr(a.size()-1,1);
	if(a.size()>2)
	{
		for(i=0;i<a.size();i++)
		{
			for(j=i;j<a.size()-1;j++)
			{
				cout<<a.substr(i,j)<<endl;	
			}
		}
	}
	return 0;
}

