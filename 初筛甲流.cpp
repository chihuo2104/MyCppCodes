#include<iostream>
#include<string>
using namespace std;
struct br
{
	int IsCough;
	char name[30];
	float temp; 
};
int count=0;
int main()
{
	br a[1000];
	int m,i;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>a[i].name>>a[i].temp>>a[i].IsCough;
	}
	for(i=0;i<m;i++)
	{
		if(a[i].temp>=37.5&&a[i].IsCough==1)
		{
			cout<<a[i].name<<endl;
			count++;
		}
	 }
	 cout<<count; 
	return 0;
}

