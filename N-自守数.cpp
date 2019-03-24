/*
问题 A: N-自守数
时间限制: 1 Sec  内存限制: 128 MB
提交: 5  解决: 3
题目描述
如果某个数 K 的平方乘以 N 以后，结果的末尾几位数等于 K，那么就称这个数为“N-自守数”。例如 3×922=25392，而 25392 的末尾两位正好是 92，所以 92是一个 3-自守数。

本题就请你编写程序判断一个给定的数字是否关于某个 N 是 N-自守数。

输入
输入在第一行中给出正整数 M（≤20），随后一行给出 M 个待检测的、不超过 1000 的正整数。
输出
对每个需要检测的数字，如果它是 N-自守数就在一行中输出最小的 N 和 NK2 的值，以一个空格隔开；否则输出 No。注意题目保证 N<10。
样例输入
3
92 5 233
样例输出
3 25392
1 25
No
*/
/*
Warning!必看！
各种缩写:
CV:count variable(统计变量)
LCV:loop control variable(循环控制变量)
OV:ordinary variable(普通变量)
TV:temporary variable(临时变量)
KIV:Keyboard input variable(键盘输入变量)
KOV:Keyboard output variable(键盘输出变量)
FV:file variable(文件变量)
*/
//预处理区域
#include<iostream>
//预处理区域结束
using namespace std;
//全局变量声明区域
/*变量用法 Variables usage:*/
//全局变量声明区域结束
//函数声明区域
int pd(int n);
//函数声明区域结束
//main() funcion
int main()
{
	//变量声明区域
	int a[2000],b,n;
	bool pand; 
	/*变量用法 Variable usage:
	a[int array]:KIV
	n[int]:KIV
	pand[bool]:PV
	*/
	//变量声明区域结束
	//变量初始化区域
	pand=false;
	//变量初始化区域结束
	//输入区域
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//输入区域结束
	//主要代码区域
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(pand)
			{
				break;
			}
			if(((j*(a[i]*a[i]))%pd(a[i]))==a[i])
			{
				cout<<j<<" "<<a[i]*a[i]*j<<endl;
				pand=true;
			}
		}
		if(!pand)
		{
			cout<<"No"<<endl;			
		}
		pand=false;
	}
	//主要代码区域结束
	return 0;
}
//funcion pd(int n);
int pd(int n)
{
	if(n>=1&&n<10)
	{
		return 10;
	}
	else
	{
	if(n>=10&&n<100)
	{
		return 100;
	}
	else
	{
		return 1000;
	}
	}
}
//小嘴抹蜜时间
/*
将进酒
唐 李白
君不见黄河之水天上来，奔流到海不复回。
君不见高堂明镜悲白发，朝如青丝暮成雪。
人生得意须尽欢，莫使金樽空对月。
天生我材必有用，千金散尽还复来。
岑夫子，丹丘生，将进酒，杯莫停。
与君歌一曲，请君为我倾耳听。
钟鼓馔玉不足贵，但愿长醉不愿醒。
古来圣贤皆寂寞，惟有饮者留其名。
陈王昔时宴平乐，斗酒十千恣欢谑。
主人何为言少钱，径须沽取对君酌。
五花马，千金裘，呼儿将出换美酒，与尔同销万古愁。
*/

