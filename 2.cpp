#include<bits/stdc++.h>
using namespace std;
int main() {
	int num, num2;
	cin>>num;
	num2 = 0;
	int nArray[num];
	while(num) {
		cin>>nArray[num2];
		num--;
		num2++;
	}
	while(num2) {
		if((nArray[num]+1)%2 == 0) {
			cout<<"0\t0"<<endl;
			num++;
			num2--;
			continue;
		}
		if(nArray[num]%4 == 0) {
			cout<<nArray[num]/4<<"\t"<<nArray[num]/2<<endl;
			num++;
			num2--;
			continue;
		}else {
			cout<<nArray[num]/4+1<<"\t"<<nArray[num]/2<<endl;
			num++;
			num2--;
			continue;
		}
	}

}