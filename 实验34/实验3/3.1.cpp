
/*		��������3.1.cpp					*
*		���ܣ������Լ������С������	*/
#include<iostream>
using namespace std;
int f1(int& m, int& n)		//�����Լ��
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
int f2(int& m, int& n)			//����С������
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
	cout << "������������Ȼ��" << endl;
	cin >> m >> n;
	a = m;b = n;
	f1(m, n);
	f2(a, b);
	cout << "���Լ����" << m << endl;
	cout << "��С��������" << b << endl;
}