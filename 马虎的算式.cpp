#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,count=0;
	int num[10];
	for(a=1; a<10; a++)
	{
		for(b=1; b<10; b++)
		{
			for(c=1; c<10; c++)
			{
				for(d=1; d<10; d++)
				{
					for(e=1; e<10; e++)
					{
						if(a!=b&&a!=c&&a!=d&&a!=e)
						{
							if(b!=c&&b!=d&&b!=e)
							{
								if(c!=d&&c!=e)
								{
									if(d!=e)
									{
										num[0]=a*10+b;
										num[1]=c*100+d*10+e;
										num[2]=a*100+d*10+b;
										num[3]=c*10+e;
										if((num[0]*num[1])==(num[2]*num[3]))
										{
											count++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout<<count;
	return 0;
}

