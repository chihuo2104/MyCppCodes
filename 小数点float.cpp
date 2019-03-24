#include<iostream>
#include<fstream>
#include<string>
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
using namespace std;
int main()
{
	int n,i,j,count;
	bool isd;
	string str[1000];
	int cunt[1000];
	cin>>n;
	for(i=0;i<n;i++){cin>>str[i]>>cunt[i];}
	for(i=0;i<n;i++){
		isd=false;
		for(j=0;j<str[i].size();j++){
			if(str[i][j]=='.'&&isd==false){isd=true;count=j;}
			if(isd){
				if(j-count==cunt[i])
				{
					cout<<str[i][j]<<endl;
				}
			}
		}
	}
	return 0;
}

