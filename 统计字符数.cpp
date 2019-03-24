#include<string>
#include<iostream>
using namespace std;
int main()
{
	string str2;
	char cha[28]=" abcdefghijklmnopqrstuvwxyz";
	int countstr[27]={0},max;
	char maxcha;
	int i,n;
	cin>>str2;
	for(i=0;i<str2.size();i++)
	{
		countstr[str2[i]-96]++;
	}
	for(i=0;i<n;i++)
	{
		if(countstr[i]>max)
		{
			max=countstr[i];
			maxcha=cha[i];
		}
	 } 
	 cout<<maxcha<<" "<<max;
	return 0;
}

