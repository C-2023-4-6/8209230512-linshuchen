/*项目：实验1&2**
编辑者：林树琛
时间：2023。11.14.*/
#include<iostream>
using namespace std;
int main() {
	int k(0);
	int i = k + 1;//原错误：未定义k.
	cout << i++ << endl;
	i = 1;//i重复定义
	cout << i ++<< endl;
	cout << "welcome to C++" << endl;
	return 0;
}