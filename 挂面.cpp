/*
问题 B: 切面条
时间限制: 1 Sec  内存限制: 128 MB
提交: 20  解决: 8
题目描述
    一根高筋拉面，中间切一刀，可以得到2根面条。

    如果先对折1次，中间切一刀，可以得到3根面条。

    如果连续对折2次，中间切一刀，可以得到5根面条。

    那么，连续对折10次，中间切一刀，会得到多少面条呢？
输入
输入对折次数n， 0<=n<=20
输出
得到的面条数。
样例输入
2
样例输出
5
*/
#include<iostream>
using namespace std;
int sqr2(int i);
int main()
{
	int t;
	int a[20]={2,3};
	for(int i=2;i<=20;i++)
	{
		a[i]=a[i-1]+a[i-1]-1;
	}
	cin>>t;
	cout<<a[t];
	return 0;
}
int sqr2(int i)
{
	int count=2;
	for(int j=0;i<i;j++)
	{
		count*=2;
	}
	return count;
}
