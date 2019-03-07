#include<bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
	int c = a%b;
	if(c == 0) {
		return b;
	}else{
		gcd(b,c);
	}
}

int main() {
	int x,y;
	cin>>x>>y;
	cout<<gcd(x,y);
}