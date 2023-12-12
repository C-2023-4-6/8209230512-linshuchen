
/*		程序名：3.1.cpp					*
*		功能：求最大公约数和最小公倍数	*/
#include<iostream>
using namespace std;
int f1(int& m, int& n)		//求最大公约数
{
	int t = 0;
	int i, a;
	for (i = 1;i <= m && i <= n;i++)
	{ 
		(m % i == 0 && n % i == 0) ? a = i : i = i;
	}
	m = a;
	return m;
}
int f2(int& m, int& n)			//求最小公倍数
{
	int i, a;
	for (i = 1;i % m || i % n;)
	{
		i++;
	}
	n = i;
	return n;
}
int main() {
	int m, n, a, b;
	cout << "请输入两个自然数" << endl;
	cin >> m >> n;
	a = m;b = n;
	f1(m, n);
	f2(a, b);
	cout << "最大公约数是" << m << endl;
	cout << "最小公倍数是" << b << endl;
}