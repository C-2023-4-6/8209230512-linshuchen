/*��������4-2.2.2cpp
* ���ܣ�16����ת10����*/
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