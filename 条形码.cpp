#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,j,a[13],a2[13];
	for(i=0;i<13;i++)
	{
		scanf("%d",&a2[i]);
	}
	for(i=0,j=12;i<13&&j>=0;i++,j--)
	{
		a[j]=a2[i];
	}
	int zhenshu=0,jiaoyan=0;
	jiaoyan=a[1]+a[3]+a[5]+a[7]+a[9]+a[11]; 
	jiaoyan*=3;
	jiaoyan+=a[2]+a[4]+a[6]+a[8]+a[10]+a[12];
	for(i=0;i<1000000;i+=10)
	{
		if(i>=jiaoyan&&i%10==0)
		{
			zhenshu=i;
			break;
		}
	}
	int ans=zhenshu-jiaoyan;
	cout<<ans<<endl;
	if(ans==a[0])
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}

