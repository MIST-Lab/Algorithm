#include<bits/stdc++.h>
using namespace std;

struct Entry
{
	char english[11];
	char foreign[11];	
} dict[100005];

int Cmp(Entry inputW, Entry dictW) {
	return strcmp(inputW.foreign, dictW.foreign)<0;
}

int main() {
	int num = 0;
	char word[11];
	while(true) {
		scanf("%s%s", dict[num].english, dict[num].foreign);
		num++;
		cin.get();
		if(cin.peek()=='\n')break;
	}
	sort(dict, dict+num, Cmp);
	while(scanf("%s", word) != EOF) {
		int left = 0, right = num - 1, mid = 0;
		while(true) {
			mid = (left + right)/2;
			if(strcmp(dict[mid].foreign, word)<0) {
				mid++;
				left = mid;
			}else if(strcmp(dict[mid].foreign, word)>0) {
				mid--;
				right = mid;
			}else if(strcmp(dict[mid].foreign, word) == 0) {
				cout<<dict[mid].english<<endl;
				break;
			}else {
				cout<<"eh"<<endl;
				break;
			}
		}
	}
	return 0;
}