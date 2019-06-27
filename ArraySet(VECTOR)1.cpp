#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	vector<int> vec;
	int tmp,n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>tmp;
		if(tmp%2==0)
		{
			tmp/=2;
		}
		else
		{
			tmp*=2;
		}
		vec.push_back(tmp);
	}
	for(i=0;i<vec.size();i++)
	{
		cout<<vec.at(i)<<" ";
	}
	return 0;
}

