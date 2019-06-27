#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	int tmp,n,i,x,y;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>tmp;
		vec.push_back(tmp);
	}
	cin>>x>>y;
	vec.insert(vec.begin()+y-1,x);
	for(i=0;i<vec.size();i++)
	{
		cout<<vec.at(i)<<" ";
	}
	return 0;
}

