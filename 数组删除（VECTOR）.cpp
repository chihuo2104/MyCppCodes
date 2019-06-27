#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	int tmp,n,i,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>tmp;
		vec.push_back(tmp);
	}
	cin>>x;
	x-=1;
	tmp=vec.at(x);
	vec.erase(x+vec.begin());
	for(i=0;i<vec.size();i++)
	{
		cout<<vec.at(i)<<" ";
	}
	return 0;
}

