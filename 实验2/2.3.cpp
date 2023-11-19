#include<iostream>
using namespace std;
int main() {
	cout << "请输入三角形三条边长" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	int s;
	if (((a + b) > c)&&((a+c)>b)&&((b+c)>a)) {
		if ((a = b)||(a=c)||(b=c)) { cout << "此三角形是等腰三角形"; }
		else { cout << "此三角形不是等边三角形"; }
	}
	else { cout << "不能构成三角形!"; }
}