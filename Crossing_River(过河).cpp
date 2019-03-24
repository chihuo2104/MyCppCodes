#include<iostream>
#include<algorithm>
using namespace std;
int Time[10000]= {0},i,n,T,n2,n3,j;
bool mycomp(int x,int y) {
	return x<y;
}
int main() {
	cin >> n3;
	for(j=0; j<n3; j++) {
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> Time[i];
		}
		sort(Time, Time + n,mycomp);
		n2 = n;
		while (1) {
			switch (n2) {
				case 1:
					cout<<Time[0] + T;
					goto return2;
					break;
				case 2:
					cout<<Time[1] + T;
					goto return2;
					break;
				case 3:
					cout<< Time[0] + Time[1] + Time[2] + T;
					goto return2;
					break;
				default:
					T += Time[n2 - 1] + Time[n2 - 2];
					n2 -= 2;
					break;
			}
			
		}
	return2:;
	}
	return 0;
}
