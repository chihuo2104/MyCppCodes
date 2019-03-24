#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
struct Stu{
	int se;
	int sm;
};
bool mycomp(Stu x,Stu y){
	if(x.se>y.se){
		return x.se>y.se;
	} else {
		if(x.se<y.se){
			return x.se>y.se;
		} else{
			if(x.sm>y.sm){
				return x.sm<y.sm;
			} else {
				return x.sm<y.sm;
			}
		}
	}
}
int main()
{
	Stu stus[1000];
	int n,i;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>stus[i].se;
		stus[i].sm=i+1;
	}
	sort(stus,stus+i,mycomp);
	for(i=0;i<5;i++)
	{
		cout<<stus[i].sm<<" "<<stus[i].se<<endl;
	}
	return 0;
}

