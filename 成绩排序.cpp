#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct Stu {
	string name;
	int source;
};
bool mycomp(Stu x,Stu y) {
	if(x.source>y.source) {
		return true;
	} else {
		if(x.source<y.source) {
			return false;
		} else {
			if(x.name>y.name) {
				return false;
			} else {
				return true;
			}
		}
	}
}
int main() {
	struct Stu a[1000];
	int m,i;
	cin>>m;
	for(i=0; i<m; i++) {
		cin>>a[i].name>>a[i].source;
	}
	sort(a,a+i,mycomp);
	for(i=0; i<m; i++) {
		cout<<a[i].name<<" "<<a[i].source<<endl;
	}
	return 0;
}

