#include<iostream>
using namespace std;
int min(int a, int b) {
	int t;
	t = (a > b) ? b : a;
	return t;
}
int main() {
	int a, b;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	int i;int t, g(1), h;
	for (i = 1;i <= (min(a, b));i++)
	{
		if (a%i==0&&b%i==0)
		{
			t = i;
		}
		else t != i;
	}
	for (g=1;g<=(a*b);g++)
	{
		if(g%a==0&&g%b==0)
		{
			h = g;
			break;
		}
	}
	cout <<"最大公约数是" << t <<"最小公倍数是" <<h<< endl;
}