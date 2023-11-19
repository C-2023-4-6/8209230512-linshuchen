#include<iostream>
using namespace std;
int main() {
	char s;
	cout << "ÇëÊäÈë×ÖÄ¸" << endl;
	cin >> s;
	if (s != toupper(s)) {
		s = toupper(s);
		cout << s << endl;
	}
	else { cout << (int)s; }
	return 0;
}