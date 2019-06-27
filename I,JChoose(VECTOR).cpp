#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	int tmp,n,i,k,l;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>tmp;
		vec.push_back(tmp);
	}
	cin>>k>>l; 
	cout<<"sum = "<<vec.at(k-1)+vec.at(l-1);
	return 0;
}

