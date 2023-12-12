/* 程序名：3.5.cpp
功能：猴子开始吃十次桃前桃数*/
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
	cout << "猴子开始有桃子";
	cout << f(1, 1)<< "个";
}