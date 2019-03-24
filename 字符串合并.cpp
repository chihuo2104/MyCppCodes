/*

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
#include<cstdio>
#include<cstring>
//预处理区域结束
using namespace std;
//全局变量声明区域
/*变量用法 Variables usage:*/
//全局变量声明区域结束
//函数声明区域
//函数声明区域结束
//main() funcion
int main()
{
	//变量声明区域
	char a[108],b[108];
	int c[128]={0};
	//变量声明区域结束
	//变量初始化区域
	//变量初始化区域结束
	//输入区域
	gets(a);
	gets(b);
	//输入区域结束
	//主要代码区域
	for(int i=0;i<strlen(a);i++)
	{
		if(c[a[i]]==0)
		{
			cout<<a[i];
			c[a[i]]++;
		} 
	}
	for(int i=0;i<strlen(b);i++)
	{
		if(c[b[i]]==0)
		{
			cout<<b[i];
			c[b[i]]++;
		} 
	}
	//主要代码区域结束
	//输出区域
	//输出区域结束
	return 0;
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

