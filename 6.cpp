#include<bits/stdc++.h>
using namespace std;


int main() {
	int num;
	int num2 = 0;
	int test[]={0,0,0,0,0,0,0,0,0,0,0,0};
	int testW = 1;
	int leftW = 0;
	int rightW = 0;
	int count = 0;
	char status;
	cin>>num;
	char left[num][3][7];
	char right[num][3][7];
	char result[num][3][7];
	int sum = 0;

//置零
	int num3 = num;
	int num4 = 0;
	while(num3) {
		for(int l = 0;l<3;l++) {
			for(int m = 0;m<7;m++) {
				left[num4][l][m] = '0';
				right[num4][l][m] = '0';
				result[num4][l][m] = '0';
			}
		}
		num3--;
		num4++;
	}

//输入
	while(num) {
		for(int i = 0;i<3;i++) {
			cin>>left[num2][i];
			cin>>right[num2][i];
			cin>>result[num2][i];
			//cout<<left[num2][i]<<endl;
			//cout<<right[num2][i]<<endl;
			//cout<<result[num2][i]<<endl;
		}
		num--;
		num2++;
	}

	//每组（一组表示每三条数据组成的一个结果）
	while(num2) {
		//12个位置可能为假币的情况
		for(int p = 0;p < 12;p++) {
			//死循环
			while(test){
				//假币是重是轻
				test[p] = testW;
				//枚举目标满足三条数据记录
				for(int j = 0;j<3;j++) {
					
					int k = 0;
					while(left[num][j][k]!='0') {
						leftW += test[left[num][j][k] - 'A'];
						k++;
					}
					k = 0;
					while(right[num][j][k]!='0') {
						rightW += test[right[num][j][k] - 'A'];
						k++;
					}
					//判断结果
					if(leftW > rightW) {
						status = 'u';
					}else if(leftW < rightW) {
						status = 'd';
					}else {
						status = 'e';
					}
					//与记录比较如为真sum++
					if(result[num][j][0] == status) {sum=sum+1;}
					else{
						sum = 0;
						if(testW == -1) {
							testW = 1;
							break;
						}
						testW = -1;
					}

					if(sum == 3){
						cout<<p<<endl;
						cout<<testW<<endl;
					}
				}
			}			
		}
		num++;
		num2--;
	}

}