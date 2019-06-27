#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int tp,tp2;
	for(int i=0;i<n;i++)
	{
		cin>>tp>>tp2;
		cout<<2*(min(tp,tp2)-1)<<endl;
	}
	return 0;
}

