#include<iostream>
using namespace std;
int main()
{
	float a, x, c, b;
	float d = 1e-5;
	cout << "请输入x" << endl;
	cin >> x;
	a = x;
	b = x;
	do
	{
		x = b;
		c = 0.5 * (x + a / x);
		b = c;
	} while (x-c>=d||x-c<=-d);
	cout << "x平方根为" <<c<< endl;
}