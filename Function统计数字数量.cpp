#include<iostream>
using namespace std;
int countNumber(int number,int countNumber);
int main()
{
	int n,c;
	cin>>n,c;
	cout<<countNumber(n,c);
	return 0;
}
int countNumber(int number,int countNumber)
{
	int tmp,count=0;
	while(number)
	{
		tmp=number%10;
		number/=10;
		if(tmp==countNumber)
		{
			count++;
		}
	}
	return count;
} 

