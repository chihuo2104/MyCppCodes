#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct Stu {
	int xh;
	float source;
};
bool mycomp(Stu x,Stu y) {
	if(x.source>y.source) {
		return true;
	} else {
		return false;
	}
}
int main() {
	Stu a[100];
	int i,m,n;
	cin>>m>>n;
	for(i=0; i<m; i++) {
		cin>>a[i].xh>>a[i].source;
	}
	sort(a,a+m,mycomp);
	printf("%d %g",a[n-1].xh,a[n-1].source);
	return 0;
}

