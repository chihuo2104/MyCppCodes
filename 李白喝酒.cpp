/*
问题 C: 李白打酒
时间限制: 1 Sec  内存限制: 128 MB
提交: 9  解决: 5
题目描述
话说大诗人李白，一生好饮。幸好他从不开车。

    一天，他提着酒壶，从家里出来，酒壶中有酒2斗。他边走边唱：

    无事街上走，提壶去打酒。
    逢店加一倍，遇花喝一斗。

    这一路上，他一共遇到店5次，遇到花10次，已知最后一次遇到的是花，他正好把酒喝光了。

    请你计算李白遇到店和花的次序，可以把遇店记为a，遇花记为b。则：babaabbabbabbbb 就是合理的次序。
    像这样的答案一共有14种。现在给你遇店次数m，遇花次数n，请你计算出所有可能方案的个数（包含题目给出的）。

输入
输入遇店次数m，遇花次数n（1<m,n<=10）
输出
输出可能的方案总数。
样例输入
5 10
样例输出
14
*/
int ans=0;
#include<iostream>
using namespace std;
void dg(int dian,int hua,int jiu); 
int main()
{
	int d,h;
	cin>>d>>h;
	dg(d,h,2);
	cout<<ans;
	return 0;
}
void dg(int dian,int hua,int jiu)
{
	if(jiu==1&&dian==0&&hua==1)
	{
		ans++;
	}
	if(dian>0)
	{
		dg(dian-1,hua,jiu*2);
	}
	if(hua>0)
	{
		dg(dian,hua-1,jiu-1);
	}
}
