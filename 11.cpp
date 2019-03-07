#include<bits/stdc++.h>
using namespace std;

void nQueen(int num) {
	char board[num][num];
	for(int c = 0;c<num;c++) {
		for(int d = 0;d<num;d++) {
			board[c][d] = 'b';
		}
	}
	for(int i = 0;i<num;i++) {
		board[0][i] = 'Q';
		int k = i;
		for(int j = 1;j<num;j++) {
			k = (k+2)%num;
			int m = j;
			int n = k;
			int jud = 0;
			while(m!=-1&&n!=-1) {
				if(board[m][n] == 'Q') {
					jud = 1;
					for(int c = 0;c<num;c++) {
						for(int d = 0;d<num;d++) {
							board[c][d] = 'b';
						}
					}
					break;
				}
				m--;
				n--;
			}
			m = j;
			n = k;
			while(m!=-1&&n!=num+1) {
				if(board[m][n] == 'Q') {
					jud = 1;
					for(int c = 0;c<num;c++) {
						for(int d = 0;d<num;d++) {
							board[c][d] = 'b';
						}
					}
					break;
				}
				m--;
				n++;
			}
			m = 0;
			n = k;
			while(m!=j) {
				if(board[m][n] == 'Q') {
					jud = 1;
					for(int c = 0;c<num;c++) {
						for(int d = 0;d<num;d++) {
							board[c][d] = 'b';
						}
					}

					break;
				}
				m++;
			}
			if(jud == 0) {
				board[j][k] = 'Q';
			}
		}
	}
	//cout<<'[';
	for(int a = 0;a<num;a++) {
		for(int b = 0;b<num;b++) {
			cout<<board[a][b];
		}
		cout<<endl;
	}
	//cout<<']'<<endl;
}

int main() {
	int input;
	cin>>input;
	nQueen(input);
	//return 0;
}