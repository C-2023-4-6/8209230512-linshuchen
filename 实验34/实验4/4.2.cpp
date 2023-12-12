/*程序名：4.2.cpp
功能：起泡排序10个数*/
#include<iostream>
using namespace std;
double sort(double list[10])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0;j < 9;j++)
		{
			if (list[j]>list[j + 1])
			{
				double a = list[j];
				list[j] = list[j + 1];
				list[j + 1] = a;
				changed = true;
			}
		}
	}
	while (changed);
	return 1;
}
int main()
{
	cout << "请输入10个数:";
	double a[10];
	for (int j = 0;j < 10;j++)
	{
		cin >> a[j];
	}
	cout << "before" << "\t";
	for (int j = 0;j < 10;j++)
	{
	cout  << a[j]<<"\t";
	}
	cout <<"\n" << "after" << "\t";
	sort(a);
	for (int j = 0;j < 10;j++)
	{
		cout << a[j] << "\t";
	}
	return 0;
}