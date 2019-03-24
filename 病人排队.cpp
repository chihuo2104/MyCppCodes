#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct ren {
	int ID;
	int source;
};
bool mycomp(ren x,ren y) {
	if(x.source>=60) {
		if(x.source>y.source) {
			return true;
		} else {
			if(x.source<y.source) {
				return false;
			} else {
				if(x.ID>y.ID) {
					return true;
				} else {
					return false;
				}
			}
		}
	} else {
		if(y.source>=60) {
			if(y.source>x.source) {
				return false;
			} else {
				if(y.source<x.source) {
					return false;
				} else {
					if(y.ID>x.ID) {
						return true;
					} else {
						return false;
					}
				}
			}
		} else {
			if(x.ID<y.ID) {
				return true;
			} else {
				return false;
			}
		}
	}
}
int main() {
	struct ren br[1000];
	int i,j,m;
	cin>>m;
	for(i=0; i<m; i++) {
		cin>>br[i].ID>>br[i].source;
	}
	sort(br,br+m,mycomp);
	for(i=0; i<m; i++) {
		printf("%06d\n",br[i].ID);
	}
	return 0;
}
