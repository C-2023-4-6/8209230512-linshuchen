#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int f;float c;
	std::cout << "请输入华氏温度" << std::endl;
	std::cin >> f ;
	c = (f - 32) /1.8;
	cout << "摄氏温度为"<<fixed<<setprecision(2)<< c << std::endl;
	return 0;
}