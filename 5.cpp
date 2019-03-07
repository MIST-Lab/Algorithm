#include<bits/stdc++.h>
using namespace std;

struct dateRecord
{
	int monS;
	int dayS;
	int amount;
	int monE;
	int dayE;
};

int main() {
	int num;
	int num2 = 0;
	int monCal[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int count = 0;
	cin>>num;
	dateRecord record[num];
	while(num) {
		cin>>record[num2].monS;
		cin>>record[num2].dayS;
		cin>>record[num2].amount;
		cin>>record[num2].monE;
		cin>>record[num2].dayE;
		num--;
		num2++;
	}
	while(num2) {
		if(record[num].monS != record[num].monE) {
			for(int i = record[num].monS;i < record[num].monE;i++) {
				count += monCal[i-1];
			}
			count = count - record[num].dayS + 1;
			count = count + record[num].dayE;
			count = count * record[num].amount;
			cout<<count<<endl;
			count = 0;
			num2--;
			num++;
		}else {
			count = record[num].dayE -record[num].dayS + 1;
			count = count * record[num].amount;
			cout<<count<<endl;
			count = 0;
			num2--;
			num++;
		}
		
	}
}