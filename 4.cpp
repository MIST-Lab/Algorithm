#include<bits/stdc++.h>
using namespace std;

int main() {
	int num;
	int num2 = 1;
	int count = 0;
	cin>>num;
	while(num2 < num) {
		if(num2%7==0||num2%10 == 7||num2 - num2%7 == 70) {
			num2++;
			continue;
		}
		count += num2*num2; 
		num2++;
	}
	cout<<count<<endl;
}