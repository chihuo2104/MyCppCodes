#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>
#include<cstring>
using namespace std;
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
void tolow(char str[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]+=32;
		}
	}
} 
int main()
{
	int ans;
	char str1[10000],str2[10000];
	//while(gets(str1),gets(str2))
	//{
		gets(str1);gets(str2);
		tolow(str1,strlen(str1));
		tolow(str2,strlen(str2));
		if(strcmp(str1,str2)>0)
		{
			cout<<"<"<<endl;
		}
		else
		{
			if(strcmp(str1,str2)<0)
			{
				cout<<">"<<endl;
			}
			else
			{
				if(strcmp(str1,str2)==0)
				{
					cout<<"="<<endl;
				}
			}
		}
	//}
	return 0;
}

