/*程序名：3.2.cpp
*功能：前200素数*/
#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i, j;
	for (i = 1,j=0;i<=num;i++)
	{
		if (num % i == 0)
		{
			j++;
		}
	}
	if (j > 2) { return 0; }
	else { return 1; }
}
int main()
{
	int i, j;
	int a[201]{0};
	for (i=1,j=0;a[200]==0;i++)
	{
		if (is_prime(i) == 1)
		{
			a[j] = i;
			j++;
		}
	}
	for (int n=0,b=1;b<j;b++,n++)
	{
		if (n % 10 == 0)
		{
			cout << "\n" << a[b] << "\t";
		}
		else cout << a[b] << "\t";
	}
	return 0;
}
