//bug 分析 invalid conversion from 'const char*' to 'char' [-fpermissive] 是误将字符串类型赋值给字符类型

#include<bits/stdc++.h>
using namespace std;

int hanoi(char a, char b, char c, int num) {
	if(num == 1) {
		cout<<a<<"->"<<c<<endl;
		//times++;
		return 0;
	}
	hanoi(a, c, b, num-1);
	hanoi(a, b, c, 1);
	hanoi(b, a, c, num-1);
	return 0;
}

int main() {
	int numb;
	cin>>numb;
	int test = hanoi('A','B','C',numb);
}

