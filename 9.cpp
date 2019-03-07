#include <bits/stdc++.h>
using namespace std;


int main() {
	int num;
	cin>>num;
	int record[num][5];
	int printRecord[5];
	int count = 0;
	int count2;
	int count3;
	for (int i = 0; i <= num; ++i)
	{
		for (int j = 0; j < num; ++j)
		{
			for (int k = 0; k <= j; ++k)
			{
				for (int l = 0; l <= k; ++l)
				{
					if(i*i*i == j*j*j + k*k*k + l*l*l) {
						record[count][0] = i;
						record[count][1] = l;
						record[count][2] = k;
						record[count][3] = j;
						record[count][4] = 0;
						count++;
					}
				}
			}
		}
	}
	count2 = count;
	int num2 = 0;
	while(count) {
		printRecord = record[num2];
		for(int t = 0;t<count2;t++){
			if(record[t][4] == 0) {
				if(record[t][0] < printRecord[0]){
					printRecord[0] = record[t][0];
					printRecord[1] = record[t][1];
					printRecord[2] = record[t][2];
					printRecord[3] = record[t][3];
					count3 = t;
				}
				else if(record[t][0]==printRecord[0]){
					if(record[t][1] < printRecord[1]){
						printRecord[0] = record[t][0];
						printRecord[1] = record[t][1];
						printRecord[2] = record[t][2];
						printRecord[3] = record[t][3];
						count3 = t;
					}
					else if(record[t][1]==printRecord[1]){
						if(record[t][2]<printRecord[2]){
							printRecord[0] = record[t][0];
							printRecord[1] = record[t][1];
							printRecord[2] = record[t][2];
							printRecord[3] = record[t][3];
							count3 = t;
						}
					}
				}
				
			}
		}
		cout<<"Cube = "<<printRecord[0]<<", Triple = ("<<printRecord[1]<<","<<printRecord[2]<<","<<printRecord[3]<<")"<<endl;
		record[count3] = record[num2];
		num2++;
		count--;
	}
}