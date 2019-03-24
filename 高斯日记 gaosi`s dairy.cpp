#include<iostream>
#include<cstdio>
const int mouth[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}}
;
bool pdrn(int y);
using namespace std;
int main()
{
	int a,i,newa;
	cin>>a;
	int y=1777,m=4,d=29;
	int flag=pdrn(y);
	while(a>0)
	{
		d++;
		a--;
		if(d>mouth[flag][m])
		{
			d=1;
			m++;
		}
		if(m==13)
		{
			m=1;
			y++;
			flag=pdrn(y);
		}
	}
	printf("%04d-%02d-%02d",y,m,d);
	return 0;
}
bool pdrn(int y)
{
	if(y%400==0){
		return true;
	}else{
	if(y%4==0&&y%100!=0)
	{
		return true;
	}else{
		return false;
	}	
	}
}
