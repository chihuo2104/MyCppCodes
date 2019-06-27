#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	int n,tmp;
	vector<int> vec;
	vector<int> flag(10001,0);
	int i;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		vec.push_back(tmp);
		flag.at(tmp)++;
	}
	for(i=flag.size()-1;i>=0;i--)
	{
		if(flag.at(i)!=0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}

