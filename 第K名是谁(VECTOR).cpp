#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct stu{
	int number;
	double source;
};
bool mysortfuncion(stu x,stu y)
{
	return x.source>y.source;
}
int main()
{
	vector<stu> vec;
	stu tmp;
	int n,k,i;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>tmp.number>>tmp.source;
		vec.push_back(tmp);
	}
	sort(vec.begin(),vec.end(),mysortfuncion);
	cout<<vec[k-1].number<<" "<<vec[k-1].source;
	return 0;
}

