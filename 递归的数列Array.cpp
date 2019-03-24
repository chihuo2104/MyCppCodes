#include<iostream>
#include<fstream>
//#define cin fin
//#define cout fout
//ifstream fin(".in");
//ofstream fout(".out");
using namespace std;
void recursion(int n);
int main()
{
	int n;
	cin>>n;
	recursion(n);
	return 0;
}
void recursion(int n)
{
	if(n==1){cout<<"1 ";} 
	else{
		recursion(n/2);
		cout<<n<<" ";
	}
} 
