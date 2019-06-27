#include<iostream> 
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	int n,tmp;
	vector<int> a;
	set<int> temp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		a.push_back(tmp);
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=i+1; j < n; j++)
		{
			temp.insert(a[i]+a[j]);
		}
	}

	int count=0;
	for(vector<int>::iterator it=a.begin();it!=a.end();it++)
	{
		tmp=*it;
//		cout<<*it<<" "<<find(a.begin(),a.end(),tmp)-a.begin()<<endl;
		if(temp.find(tmp)!=temp.end())
		{
			//cout<<*it<<" "<<find(a.begin(),a.end(),tmp)-a.begin()<<endl;
			count++;
		}
	}
	cout<<count;
	return 0;
}

