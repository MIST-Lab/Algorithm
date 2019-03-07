#include<bits/stdc++.h>
using namespace std;

struct record
{
	int p;
	int e;
	int i;
	int d;
};

int main(){
	record test[100];
	int num = 0;
	int num2 = 0;
	//input
	while(num+1) {
		cin>>test[num].p>>test[num].e>>test[num].i>>test[num].d;

		if(test[num].p == -1) {
			break;
		}
		num++;
	}

	while(num) {
		
		for (int i = test[num2].d + 1; i <= 21252; i++)
		{
			if((i - test[num2].p)%23 == 0 && (i - test[num2].e)%28 == 0 && (i - test[num2].i)%33 == 0 ) {
				cout<<"Case "<<num2+1<<":the next triple peak occurs in "<<i-test[num2].d<<" days."<<endl;
				break;
			}
		}
		num--;
		num2++;
	}
	//return 0;
}