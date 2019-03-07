#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin>>num;
	if((num%10)>=6) {
		cout<<((num/10)*10 + 6)*3 - 3<<endl;
	}
	if((num%10)>=2) {
		cout<<((num/10)*10 + 2)*3 - 1<<endl;
	}
	if((num%10)<2) {
		cout<<((num/10 - 1)*10 + 6)*3 - 3<<endl;
	}
}