#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	int n,tmp,count=0,x;
	vector<int> vec;
	int c[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	vector<int> xishu(c,c+17); 
	int i,sum;
	for(int i=0;i<17;i++)
	{
		cin>>tmp;
		vec.push_back(tmp);
	}
	for(i=0;i<vec.size();i++)
	{
		x=vec.at(i)*xishu.at(i);
		count+=x;
	}
	count=count%11;
	switch(count)
	{
		case 0:
			cout<<"1";
			break;
		case 1:
			cout<<"0";
			break;
		case 2:
			cout<<"X";
			break;
		case 3:
			cout<<"9";
			break;
		case 4:
			cout<<"8";
			break;
		case 5:
			cout<<"7";
			break;
		case 6:
			cout<<"6";
			break;
		case 7:
			cout<<"5";
			break;
		case 8:
			cout<<"4";
			break;
		case 9:
			cout<<"3";
			break;
		case 10:
			cout<<"2";
			break;
	}
	return 0;
}


