/*程序名：4.1.cpp
功能除去十个数的重复数*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入10个数：";
	int i, n, b, m;
	int a[10];
	for (i=0,m=0;m < 10;m++)
	{
		cin >> n;
		if (i != 0)
		{
			for (int j = 0, b = 0;j < i;j++)
			{
				if (a[j] != n) b++;
				if (b == i)
				{
					a[i] = n;
					i++;
				}
			}

		}
		else
		{
			a[i] = n;
			i++;
		}
	}
	cout << "互异的数为:";
	for (int y=0;y<i;y++)
	{
		
		cout << a[y] << "\t";
	}
}