#include<iostream>
#include<vector> 
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
struct p{
	double tall;
	char gender[10];
};
bool cmp(p x,p y)
{
	return x.tall>y.tall;
} 
bool cmp2(p x,p y)
{
	return x.tall<y.tall;
} 
int main()
{
	vector<p> male,female;
	p tmp;
	int i;
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>tmp.gender>>tmp.tall;
		if(strcmp(tmp.gender,"male"))
		{
			male.push_back(tmp);
		}
		else
		{
			female.push_back(tmp);
		}
	}
	sort(male.begin(),male.end(),cmp);
	sort(female.begin(),female.end(),cmp2);
	for(i=0;i<female.size();i++)
	{
		printf("%.2lf ",female[i].tall);
	}
	for(i=0;i<male.size();i++)
	{
		printf("%.2lf ",male[i].tall);
	}
	return 0;
}

