#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	int n,tmp;
	vector<int> vec;
	int i;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		vec.push_back(tmp);
	}
	cout<<vec.at(0)<<" ";
	for(i=1;i<vec.size();i++)
	{
		if(i%2==0)
		{
			cout<<vec.at(i)<<" ";
		}
	}
	return 0;
}


