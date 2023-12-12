/*程序名：4.3.cpp
功能：解决储物柜问题*/
#include<iostream>
using namespace std;
int main()
{
	bool a[101]{ false };
	for (int t=1;t<=100;t++)
	{
		for (int s=t;s<=100;s+=t)
		{
			if (a[s] == false) a[s] = true;
			else a[s] = false;
		}
	}
	cout << "最后这些柜子是开的："<< endl;
	for (int x=1, u=0;x<=100;x++)
	{
		if (a[x] == 1) { u++; cout <<"L" << x << "\t"; }
	}

	return 0;
}