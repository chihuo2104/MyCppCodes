#include <iostream>
using namespace std;
struct student {
	char Name[20];
	int Qm;
	int Py;
	char Sm;
	char Es;
	int Fb;
};
int main() {
	int n;
	int a[100] = {0};
	cin>>n;
	if (n>100||n<1) {
		return 0;
	}
	student *s = new student[n];
	for (int i = 0; i<n; i++) {
		cin>>s[i].Name>>s[i].Qm>>s[i].Py>>s[i].Sm>>s[i].Es>>s[i].Fb;
	}
	for (int i = 0; i<n; i++) {
		if (s[i].Qm<=80) {
			if (s[i].Py>80) {
				if (s[i].Sm=='y'||s[i].Sm=='Y') {
					a[i]+=850;
				}
			}
		}
		if (s[i].Qm>80) {
			if (s[i].Fb>=1) {
				a[i]+=8000;
			}
			if (s[i].Py>80) {
				if (s[i].Sm=='y'||s[i].Sm=='Y') {
					a[i]+=850;
				}
			}
			if (s[i].Qm>85) {
				if (s[i].Es=='y'||s[i].Es=='Y') {
					a[i]+=1000;
				}
				if (s[i].Py>80) {
					a[i]+=4000;
				}
			}
			if (s[i].Qm>90) {
				a[i]+=2000;
			}
		}
	}
	int sum=0;
	int sunny=a[0];
	int j=0;
	for (int i = 0; i<n; ++i) {
		sum+=a[i];
		if (sunny<a[i]) {
			sunny = a[i];
			j=i;
		}
	}
	cout<<s[j].Name<<endl;
	cout<<sunny<<endl;
	cout<<sum<<endl;
	return 0;
}
