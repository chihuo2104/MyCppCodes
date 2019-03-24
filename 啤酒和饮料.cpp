/*
问题 A: 啤酒和饮料
时间限制: 1 Sec  内存限制: 128 MB
提交: 17  解决: 15
[提交][状态][讨论版]
题目描述
啤酒每罐2.3元，饮料每罐1.9元。小明买了若干啤酒和饮料，一共花了82.3元。

我们还知道他买的啤酒比饮料的数量少，请你计算他买了几罐啤酒几罐饮料。

   
输入
无
输出
输出啤酒的数量和饮料的数量，以空格间隔。
样例输入
无
*/ 
#include<iostream>
using namespace std;
int main()
{
	const double beer=2.3,drink=1.9;
	int i,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			if(((beer*i)+(drink*j)==82.3)&&i<j)
			{
				cout<<i<<" "<<j;
			}
		}
	}
	return 0;
}

