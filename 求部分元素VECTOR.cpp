#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	int n,tmp,count=0;
	vector<int> vec;
	int i,sum;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		vec.push_back(tmp);
	}
	cin>>sum;
	for(i=sum+1;i<vec.size();i++)
	{
		count+=vec.at(i);
	}
	cout<<"sum="<<count;
	return 0;
}


