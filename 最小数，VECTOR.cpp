#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	int n,tmp,min,index;
	vector<int> vec;
	int i;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		vec.push_back(tmp);
	}
	min=vec.at(0);
	index=0;
	for(i=1;i<vec.size();i++)
	{
		if(vec.at(i)<min)
		{
			index=i;
			min=vec.at(i);
		}
	}
	cout<<"min="<<min<<", index="<<index;
	return 0;
}


