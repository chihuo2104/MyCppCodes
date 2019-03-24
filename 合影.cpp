#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct Ren {
	char sex[10];
	double height;
};
bool mycomp(Ren x,Ren y) {
	if(strcmp("male",x.sex)==0&&strcmp("male",y.sex)==0) {
		return x.height<y.height;
		} else {
		if(strcmp("frmale",x.sex)==0&&strcmp("frmale",y.sex)==0) {
			return x.height>y.height;
			} else {
			if(strcmp("male",x.sex)==0&&strcmp("frmale",y.sex)==0) {
				return true;
			} else {
					return false;
			}
		}
	}
}
int main() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	int m,i;
	struct Ren ren[1000];
	cin>>m;
	for(i=0; i<m; i++) {
		cin>>ren[i].sex>>ren[i].height;
	}
	sort(ren,ren+m,mycomp);
	for(i=0; i<m; i++) {
		cout<<ren[i].height<<" ";
	}
	return 0;
}
