#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
bool comp(int x,int y)
{
	return x<y;
}
bool IsPrime(int shu)
{
	int i,isprime=1;
	if(shu<2)
	{
		return false; 
	}
	for(i=2;i<sqrt(shu);i++)
	{
		if(shu%i==0)
		{
			isprime=0;
			break;
		}
	}
	if(isprime==1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int i,j,l,pj,k=0,prime[100000],shu[100000],n,xianzhi;
	while(cin>>n>>xianzhi)
	{
		memset(prime,0,100000*sizeof(int));
		for(i=0;i<n;i++)
		{
			scanf("%d",&shu[i]);
		}
		for(i=0;i<n;i++)
		{	
			pj=shu[i];
			for(j=i+1;j<i+xianzhi;j++)
			{
				if(pj==0)
				{
					break;
				}
				if(j>n)
				{
					goto continue2;
				}
				pj*=10;
				pj+=shu[j];
			}
			if(IsPrime(pj))
			{
				prime[k]=pj;			
				k++;
			}
		}
		continue2:;
		l=unique(prime,prime+k)-prime;
		sort(prime,prime+l,comp);
		if(prime[0]=0)
		{
			return 0;
		}
		cout<<prime[0];
		for(i=1;i<l-1;i++)
		{
			cout<<","<<prime[i];
		} 
	}
	
	return 0;
}

