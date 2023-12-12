/*程序名：3.3.cpp
功能：摄氏温度与华氏温度转换*/
#include<iostream>
#include "mytemperature.h"
#include<iomanip>
using namespace std;
int main()
{
	double i,j;
	for (i=40.0;i>=31;i--)
	{
		if (i == 40.0)
		{
			cout << "Celsius" << "\t" << "\t" << "Farenheit" << endl;
	}
		cout <<setprecision(1)<<fixed<< i << "\t" << "\t" << celsius_to_fah(i)<<"\t" <<  endl;
	}
	for (j = 120.0;j >= 30.0;j--)
	{
		if (j == 120)
		{
			cout << "Farenheit" << "\t"<< "Celsius" << endl;
		}
		cout << setprecision(1) << fixed<< j << "\t" << "\t" << setprecision(2) << fixed << fahrenheit_to_cels(j) << "\t" << endl;
	}
	return 0;
}
