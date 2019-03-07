#include<bits/stdc++.h>
using namespace std;

struct len
{
	int sta;
	int end;
};

int main() {
	int num;
	int num2 = 0;
	int length;
	cin>>length;
	cin>>num;
	len records[num];
	int tree[length+1];
	int count = 0;
	for(int i = 0;i<=length;i++) {
		tree[i] = 1;
	}
	while(num) {
		cin>>records[num2].sta;
		cin>>records[num2].end;
		num--;
		num2++;
	}
	while(num2) {
		for(int j = records[num].sta;j<=records[num].end;j++) {
			tree[j] = 0;
		}
		num++;
		num2--;
	}
	for(int k = 0;k<=length;k++) {
		if(tree[k] == 1)
			count++;
	}
	cout<<count;

}