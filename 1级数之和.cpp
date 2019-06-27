#include<iostream>
using namespace std;
int main()
{
	double n=0,k;
	int i;
	cin>>k;
	for(i=1;n<=k;i++)
	{
		n+=1.0/i;
//		cout<<i<<" "<<1.0/i<<" "<<n<<endl;
	}
	if(i==1)
	{
		cout<<"2";
	}
	else
	{
		i--;
		cout<<i;
	}
	return 0;
}

