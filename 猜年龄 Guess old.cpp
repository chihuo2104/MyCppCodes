#include<iostream>
using namespace std;
int sqr3(int i);
int sqr4(int i);
int main()
{
	int a,b,i;
	i=18; 
	a=sqr3(i);
	b=sqr4(i);
	cout<<i<<" "<<a<<" "<<b<<endl;
	return 0;
}
int sqr3(int i)
{
	return i*i*i;
}
int sqr4(int i)
{
	return i*i*i*i;
}	
