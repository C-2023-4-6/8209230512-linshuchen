/* ��������3.5.cpp
���ܣ����ӿ�ʼ��ʮ����ǰ����*/
#include<iostream>
using namespace std;
int f(int a,int i)
{
	if (i == 10) return a;
	else
	{
		a=(a+1)*2;
		i++;
		return f(a, i);
	}

}
int main()
{	
	cout << "���ӿ�ʼ������";
	cout << f(1, 1)<< "��";
}