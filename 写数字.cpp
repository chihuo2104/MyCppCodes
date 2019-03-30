#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
string itoa(int num,string& chr);
const char* py[]={"lin","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{
	char a[10000];
	string intger;
	int count=0;
	cin>>a;
	for(int i=0;i<strlen(a);i++)
	{
		count+=a[i]-'0';
	}
	intger=itoa(count,intger);
	cout<<py[intger[0]-'0'];
	for(int i=1;i<intger.size();i++)
	{
		cout<<" "<<py[intger[i]-'0'];
	}
	return 0;
}
string itoa(int num,string chr)
{
	int nnum,x,i=0; 
	while(num!=0)
	{
		x=num%10;
		chr[i]=x+'0';
		i++;
		nnum=num/10;
		num=nnum;
	}
	reverse(chr.begin(),chr.end());
	return chr;
} 
