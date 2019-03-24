/*
问题 A: 编程团体赛
时间限制: 1 Sec  内存限制: 128 MB
题目描述
编程团体赛的规则为：每个参赛队由若干队员组成；所有队员独立比赛；参赛队的成绩为所有队员的成绩和；成绩最高的队获胜。

现给定所有队员的比赛成绩，请你编写程序找出冠军队。

输入
输入第一行给出一个正整数 N（≤104），即所有参赛队员总数。随后 N 行，每行给出一位队员的成绩，格式为：队伍编号-队员编号 成绩，其中队伍编号为 1 到 1000 的正整数，队员编号为 1 到 10 的正整数，成绩为 0 到 100 的整数。
输出
在一行中输出冠军队的编号和总成绩，其间以一个空格分隔。注意：题目保证冠军队是唯一的。
样例输入
6
3-10 99
11-5 87
102-1 0
102-3 100
11-9 89
3-2 61
样例输出
11 176
提示
*/
#include<iostream>
#include<cstdio> 
using namespace std;
int main()
{
	int n,dw[1000]={0},dwm,dy,cj;
	int big_dw,big_cj;//big_dw <-最大的成绩的队伍名 big_cj<-最大的成绩 
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d-%d %d",&dwm,&dy,&cj);
		dw[dwm]+=cj;
	}
	big_dw=0;
	big_cj=dw[0];
	for(int i=1;i<99;i++)
	{
		if(big_cj<dw[i])
		{
			big_dw=i;
			big_cj=dw[i];
		}
	}
	cout<<big_dw<<" "<<big_cj;
	return 0;
}

