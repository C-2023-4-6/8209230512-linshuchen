/*程序名：4-2.2.2cpp
* 功能：16进制转10进制*/
#include<iostream>
#include<sstream>
using namespace std;
int parseHesx(const char* const hexString)
{
	int a;
	stringstream s;
	s<<hex << hexString;
	s >> a;
	cout << a;
	return a;
}
int main()
{
	char c[100] = "";
	cin >> c;
	parseHesx(c);
}