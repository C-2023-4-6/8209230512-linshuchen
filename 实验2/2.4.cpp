#include<iostream>
using namespace std;
int main() {
	float a, b;
	float l;
	int x, y;
	char c, d;
	cout << "请输入计算第一个数和第二个数（按顺序）" << endl;
	cin >> a >> b;
	x = static_cast<int>(a);
	y = static_cast<int>(b);
	cout << "请输入运算符" << endl;
	d = getchar();c = getchar();
	if ((b != 0 || (b == 0 && c != '/'))&&c!='%')//判断是否符合运算规则
	{
		switch (c)
		{
		case '+': l = a + b;break;
		case '-':l = a - b;break;
		case '*':l = a * b;break;
		case'/':l = a / b;break;	
		}
		cout << "结果是：" << l << endl;
	}
	else if (c == '%')//另外讨论求余
	{
		if (a == x && b == y)
		{
			l = x % y;
			cout << "结果是" << l << endl;
		}
		else cout << "不符合计算规则" << endl;
		return 0;
	}
}