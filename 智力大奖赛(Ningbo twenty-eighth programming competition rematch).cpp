#include<iostream>
using namespace std;
int main()
{
	int n,i,j=1;
	int ans1=0,ans2=0;
	while(cin>>n)
	{
		ans1=0,ans2=0;
		for(i=0;i<n;i++)
		{
			ans1+=j;
			j+=2;
		}
		for(i=1;i<=n;i++)
		{
			ans2+=i*3;
		}
		cout<<ans1<<endl<<ans2;
	}	
	
	
	return 0;
}

