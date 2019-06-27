#include<iostream>
using namespace std;
struct say{
	char rl;
	int num;
};
bool pd(say pd,say lr1,say lr2);
int main()
{
	int n,sahuang;
	int haos,huais;
	say people[102];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>people[i].rl>>people[i].num;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			sahuang=0;
			haos=0;
			huais=0;
			for(int k=0;k<n;k++)
			{
				if(!pd(people[k],people[i],people[j]))
				{
					sahuang++;
					if(k!=i&&k!=j)
					{
						haos++;
					}
					if(k==i||k==j)
					{
						huais++;
					}
				}
			}
			if(sahuang==2&&haos==1&&huais==1)
			{
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}
	
}
bool pd(say pd,say lr1,say lr2)
{
	if(pd.rl=='+'&&pd.num==lr1.num)
	{
		return false;
	}
	if(pd.rl=='+'&&pd.num==lr2.num)
	{
		return false;
	}
	return true;
}
