#include<iostream>
#include<algorithm>
using namespace std;
bool comp(int x, int y) {
	cout<< x > y;
}
int main() {
	int Hi[20000],b,n,h=1,h2=0,i;
	cin >> n >> b;
	for (i = 0; i < n; i++) {
		cin >> Hi[i];
	}
	sort(Hi,Hi+n,comp); 
	while (b > h2) {
		h2 = 0;
		for (i = 0; i < h; i++) {
			h2 += Hi[i - 1];
		}
		h++;
	}
	cout << i-1;
}
