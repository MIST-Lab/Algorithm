#include<bits/stdc++.h>

using namespace std;

double BinarySearh(double right, double left) {
	double mid, f;
	while(right - left>1e-10) {
		mid = left + (right - left)/2;
		f = mid*mid*mid-5*mid*mid+10*mid-80;
		if(f<0)left = mid;
		else right = mid;
	}
	return mid;
}
int main() {
	cout<<setprecision(9)<<BinarySearh(10.0,0.0)<<endl;
	return 0;
}