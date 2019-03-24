#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s[100];
	int i;
	for(i=0;cin>>s[i];i++)
	    ;//主体有意留空
	sort(s,s+i);
	int k=unique(s,s+i)-s;
	int j;
	for(j=0;j<k;j++)
		cout<<s[j]<<endl; 
	return 0;
}
