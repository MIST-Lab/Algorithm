#include<bits/stdc++.h>
using namespace std;


int cal(int num, int countin) {
	if(num == 1){
		countin++;
		return countin;
	}else {
		for(int n = 2;n<num;n++){
			if(num%n == 0) {
				countin += cal(num/n, countin);
			}
		}
		//countin ++;
		return countin ;
	}
}

int main() {
	int count = 0;
	int input;
	cin>>input;
	count = cal(input, count);
	cout<<count<<endl;
}
